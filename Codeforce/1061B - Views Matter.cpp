#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    ll n, m, x, maks = 0, sum = 0, maks2 = 0;
    vector<ll> v;
    cin >> n >> m;
    for (ll i = 0; i < n; ++i)
    {
        cin >> x;
        v.pb(x);
        sum += x;
    }
    sort(v.begin(), v.end());
    if (n==1)
    {
        cout<<0<<endl;
    } else {
        ll ans = v[0];
        ll prev = v[0];
        ll prev2 = 0;
        ll bedaPrev = prev - prev2;
        ll banyakCur = 1;
        ll lebih = 0;
        for (ll i = 1; i < v.size(); ++i)
        {
            if (v[i] != 1)
            {
                if (v[i] == prev)
                {
                    ans += 1;
                    if (banyakCur < (bedaPrev))
                    {
                        ans--;
                        banyakCur++;
                    } else if (lebih)
                    {
                        lebih--;
                        ans--;
                    }
                } else {
                    ans += v[i]-v[i-1];
                    lebih += bedaPrev-banyakCur;
                    prev2 = prev;
                    prev = v[i];
                    bedaPrev = prev - prev2;
                    banyakCur = 1;
                }
            } else {
                ans++;
            }
            
        }
        cout << sum - ans << endl;
    }
    return 0;

}