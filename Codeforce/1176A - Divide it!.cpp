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
    ll q;
    cin >> q;
    for (ll i = 0; i < q; ++i)
    {
        ll n, answer = 0;
        bool bisa = true;
        cin >> n;

        while (n != 1) {
            if (n % 5 == 0)
            {
                n /= 5;
                n *= 4;
                answer++;
            } else if (n % 3 == 0) {
                n /= 3;
                n *= 2;
                answer++;
            } else if (n % 2 == 0) {
                n /= 2;
                answer++;
            } else {
                bisa = false;
                break;
            }
        }

        if (bisa)
        {
            cout << answer << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}