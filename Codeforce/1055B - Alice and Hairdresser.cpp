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
    ll n, m, l, x;
    cin >> n >> m >> l;
    vector<ll> length;
    length.pb(-1);
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        length.pb(x);
    }
    length.pb(-1);

    ll ans = 0;
    bool ketemu = false;
    for (int i = 1; i <= n; ++i)
    {
        if (ketemu)
        {
            if (length[i] <= l)
            {
                ketemu = false;
            }
        } else {
            if (length[i] > l)
            {
                ketemu = true;
                ans++;
            }
        }
        
    }

    for (int i = 0; i < m; ++i)
    {
        cin >> x;
        if (x == 0)
        {
            cout << ans <<endl;
        } else {
            ll p, d;
            cin >> p >> d;
            if (length[p] <= l && (length[p]+d) >l)
            {
                if (p == 1)
                {
                    if (length[p+1] <= l)
                    {
                        ans++;
                    } else if (length[p+1] > l){
                        //Nothing
                    }
                } else if (p == n) {
                    if (length[p-1] <= l)
                    {
                        ans++;
                    } else if (length[p-1] > l){
                        //Nothing
                    }
                } else {
                    if (length[p-1] <= l && length[p+1] <= l)
                    {
                        ans++;
                    } else if (length[p-1] > l && length[p+1] > l){
                        ans--;
                    }
                }
                
            } 
            length[p] += d;
        }
    }

    return 0;
}