#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;
typedef unsigned long long ull;

bool cmp (int i,int j) { return (i>j); }

int main(){
    ll n,m;
    cin>>n>>m;
    vector<ll> kurangi;
    ll sum = 0;
    for (ll i = 0; i < n; ++i)
    {
        ll a,b;
        cin>>a>>b;
        sum+=a;
        kurangi.pb(a-b);
    }

    sort(kurangi.begin(), kurangi.end(), cmp);

    ll ans = 0;
    while(sum>m && ans<n){
        sum-=kurangi[ans];
        ans++;
    }
    if (sum<=m)
    {
        cout<<ans<<endl;
    } else {
        cout<<-1<<endl;
    }

    return 0;
}