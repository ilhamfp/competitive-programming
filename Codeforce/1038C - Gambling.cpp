#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;
typedef unsigned long long ull;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };

bool cmp (int i,int j) { return (i>j); }

int main()
{
    int n;
    cin>>n;
    vector<int> va,vb;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin>>x;
        va.pb(x);
    }
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin>>x;
        vb.pb(x);
    }

    sort(va.begin(), va.end());
    sort(vb.begin(), vb.end());

    ll scoreA=0, scoreB=0;
    bool turnA = true;
    while(!va.empty() || !vb.empty()){
        if (turnA)
        {
            if (!va.empty() && !vb.empty())
            {
                if (va[va.size()-1] >= vb[vb.size()-1])
                {
                    scoreA+=va[va.size()-1];
                    va.pop_back();
                } else {
                    vb.pop_back();
                }
            } else if (va.empty()){
                vb.pop_back();
            } else if (vb.empty()){
                scoreA+=va[va.size()-1];
                va.pop_back();
            }
            
            turnA = false;
        } else {
            if (!va.empty() && !vb.empty())
            {
                if (vb[vb.size()-1] >= va[va.size()-1])
                {
                    scoreB+=vb[vb.size()-1];
                    vb.pop_back();
                } else {
                    va.pop_back();
                }
            } else if (vb.empty()){
                va.pop_back();
            } else if (va.empty()){
                scoreB+=vb[vb.size()-1];
                vb.pop_back();
            }

            
            turnA = true;
        }
        // cout<<scoreA<<" "<<scoreB<<endl;
    }

    
    // for (int i = 0; i < va.size(); ++i)
    // {
    //     // cout<<"masuk"<<endl;
    //     scoreA+=va[i];
    // }

    
    // for (int i = 0; i < vb.size(); ++i)
    // {
    //     // cout<<"masuk"<<endl;
    //     scoreB+=vb[i];
    // }
    

    cout<<(scoreA-scoreB)<<endl;
    return 0;
}