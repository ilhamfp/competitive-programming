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
    int q;
    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        ll n, a, b, ans = 0;
        cin >> n >> a >> b;
        if (2*a > b)
        {
            // Use B
            ans += b*(n/2);
            if (n%2)
            {
                // Sisa 1
                ans += a;
            }
        } else {
            ans += a*n;
        }
        cout << ans << endl;
    }
    return 0;
}


