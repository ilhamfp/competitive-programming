#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back   
#define pii pair< int , int >
#define pll pair< long , long >
#define pi acos(-1.0)
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define MOD 10e9+7
#define line puts("")

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 
using namespace std;

int main() {
    ll ans = 0;
    ll n,k,m;
    cin>>n>>k>>m;
    vector<string> vString;
    vector<ll> vInt;
    for (ll i = 0; i < n; ++i)
    {
        string s;
        cin>>s;
        vString.pb(s);
    }
    for (ll i = 0; i < n; ++i)
    {
        ll x;
        cin>>x;
        vInt.pb(x);
    }

    map<string, int> mapString;

    for (ll i = 0; i < k; ++i)
    {
        ll x;
        cin>>x;
        ll minNilai = LONG_MAX;
        vector<ll> sekelompok;
        for (ll j = 0; j < x; ++j)
        {
            ll y;
            cin>>y;
            sekelompok.pb(y-1);
            minNilai = min(minNilai,vInt[y-1]);
        }

        for (ll j = 0; j < x; ++j)
        {
            mapString[vString[sekelompok[j]]] = minNilai;
            //printf("%lld : %lld\n", sekelompok[j], minNilai);
        }

    }

    for (ll i = 0; i < m; ++i)
    {
        string s;
        cin>>s;
        ans += mapString[s];
        // printf("%lld : ",vInt[ (find(vString.begin(), vString.end(), s)- vString.begin()) ] );
        // cout<<s<<endl;
    }

    cout<<ans<<endl;
    return 0;
}