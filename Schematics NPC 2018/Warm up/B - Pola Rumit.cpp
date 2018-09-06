#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;
typedef unsigned long long ull;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };

bool cmp (int i,int j) { return (i>j); }

void batasHorizontal(int y,int p){
    for (int i = 0; i < y; ++i)
    {
        cout<<"+";
        for (int j = 0; j < p; ++j)
        {
            cout<<"-";
        }
    }
    cout<<"+"<<endl;
}

int main()
{
    int x,y,p;
    cin>>x>>y>>p;
    batasHorizontal(y,p);
    for (int i = 0; i < x; ++i)
    {
        for (int l = 0; l < p; ++l)
        {
            cout<<"|";
            for (int j = 0; j < y; ++j)
            {
                
                for (int k = 0; k < p; ++k)
                {
                    if (l==p/2 && k==p/2 && p%2==1)
                    {
                        cout<<"x";
                    } else {
                        char bentuk;
                        if (l>= p/2)
                        {
                            if (k>= p/2)
                            {
                                bentuk = '\\';
                            } else {
                                bentuk = '/';
                            }
                        } else {
                            if (k>= p/2)
                            {
                                bentuk = '/';
                            } else {
                                bentuk = '\\';
                            }
                        }


                        int letak1 = p-l-1;
                        int letak2 = l;
                        if (k == letak1 || k == letak2)
                        {
                            cout<<bentuk;
                        } else {
                            cout<<" ";
                        }

                    }
                }
                cout<<"|";
            }
            cout<<endl;
        }
        batasHorizontal(y,p);
    }
    return 0;
}