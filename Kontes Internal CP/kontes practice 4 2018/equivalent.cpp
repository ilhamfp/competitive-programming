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

bool equivalent(vector<int> vA, vector<int> vB){
    // cout<<"Masuk "<<vA.size()<<endl;
    // for (int i = 0; i < vA.size(); ++i)
    // {
    //     cout<<vA[i]<<" ";
    // }
    // cout<<endl;
    // for (int i = 0; i < vA.size(); ++i)
    // {
    //     cout<<vB[i]<<" ";
    // }
    // cout<<endl;
    if (vA.size()==1)
    {
        if (vA[0] == vB[0])
        {
            return true;
        } else {
            return false;
        }
    } else {
        bool cek = true;
        for (int i = 0; i < vA.size(); ++i)
        {
            if (vA[i] != vB[i])
            {
                cek = false;
                break;
            }
        }

        if (cek)
        {
            return true;
        } else {
            if (vA.size()%2)
            {
                return false;
            } else {
                vector<int> copyvA1(vA.begin(), vA.begin()+(vA.size()/2));
                vector<int> copyvA2(vA.begin()+(vA.size()/2), vA.begin()+(vA.size()));
                vector<int> copyvB1(vB.begin(), vB.begin()+(vB.size()/2));
                vector<int> copyvB2(vB.begin()+(vB.size()/2), vB.begin()+(vB.size()));

                if (equivalent(copyvA1,copyvB1) && equivalent(copyvA2, copyvB2))
                {
                    return true;
                } else if (equivalent(copyvA1,copyvB2) && equivalent(copyvA2, copyvB1)){
                    return true;
                } else {
                    return false;
                }
            }
            
        }

    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    vector<int> vA;
    vector<int> vB;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin>>x;
        vA.pb(x);
    }
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin>>x;
        vB.pb(x);
    }

    if (equivalent(vA,vB))
    {
        cout<<"EQ"<<endl;
    } else {
        cout<<"NEQ"<<endl;
    }

    return 0;
}