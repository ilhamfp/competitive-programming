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
    ll n;
    cin>>n;
    if (n==1)
    {
        ll x;
        cin>>x;
        cout<<x<<endl;
        return 0;
    }
    vector<ll> vpos,vneg;
    for (ll i = 0; i < n; ++i)
    {
        ll x;
        cin>>x;

        if (x>=0)
        {
            vpos.pb(x);
        } else {
            vneg.pb(x);
        }
    }
    ll sum = 0;
    if (vneg.size())
    {
        for (ll i = 0; i < vneg.size(); ++i)
        {
            sum+=abs(vneg[i]);
        }

        if (vpos.size()==0)
        {
            ll terbesar = *max_element(vneg.begin(), vneg.end());
            sum+= (2*terbesar); 
        }else {
            for (ll i = 0; i < vpos.size(); ++i)
            {
                sum+=vpos[i];
            }
        }
        
    } else {
        ll terkecil = *min_element(vpos.begin(), vpos.end());
        // ll min_diff = 1;
        // ll total = 0;
        // ll diff1 = 0;
        // ll diff2 = 0;
        for (ll i = 0; i < vpos.size(); ++i)
        {
            sum+=vpos[i];
        }

        sum-= (2*terkecil); 
        
    }
    cout<<sum<<endl;
    return 0;
}