#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;

int main(){
    ll n,m;
    cin>>n>>m;
    vector<ll> v;
    for (ll i = 0; i < n; ++i)
    {
        ll x;
        cin>>x;
        v.pb(x);
    }
    ll count = 0;
    for (ll i = 0; i < n; ++i)
    {
        count+=v[i];
        cout<<(count/m)<<" ";
        count = count%m;
    }
    return 0;
}
