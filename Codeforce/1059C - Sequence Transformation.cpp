#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };

bool cmp (int i,int j) { return (i>j); }

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int n;
    bool check[1000005];
    memset(check,true,sizeof(check));
    cin>>n;
    if (n==1)
    {
        cout<<"1"<<endl;
    } else if (n==2){
        cout<<"1 2"<<endl;
    } else if (n==3){
        cout<<"1 1 3"<<endl;
    } else {
        int counter = 0;
        if (n&1)
        {
            cout<<"1 ";
            n--;
        }
        int tertinggi = n;
        for (int i = 1; i <= n; ++i)
        {
            if (check[i])
            {
                for (int j = i; j <= n; j=j+(2*i))
                {
                    counter++;
                    if (j==tertinggi && counter == n-1)
                    {
                        cout<<i<<" ";
                        check[j-i] = false;
                    } else {
                        cout<<i<<" ";
                        check[j] = false;
                    }

                    if (j==tertinggi)
                    {
                        tertinggi-=i;
                    }
                    
                }
            }
        }
        cout<<endl;

    }
    
    return 0;
}
