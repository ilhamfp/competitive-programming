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

ll n,m,x;
vector<ll> v;

bool cek(ll cut){
    // printf("masuk %d\n", cut );
    ll ans;
    ll sum = 0;
    ll titikAwal = lower_bound(v.begin(), v.end(), cut) - v.begin();
    for (ll i = titikAwal; i < n; ++i)
    {
        sum+=(v[i] - cut);
    }

    if (sum>=m)
    {
        ans = true;
    } else {
        ans = false;
    }

    return ans;
}

int main() {
    cin>>n>>m;
    for (ll i = 0; i < n; ++i)
    {
        cin>>x;
        v.pb(x);
    }
    sort(v.begin(), v.end());
    ll low = 0, high = v[v.size()-1];
    while(low != high){
        // printf("masuk loop %d %d\n", low, high);
        ll mid = (high+low+1)/2;
        if (cek(mid))
        {
            // printf("true\n");
            low = mid;
        } else {
            // printf("false\n");
            high = mid-1;
        }
    }

    cout<<low<<endl;


    return 0;
}

