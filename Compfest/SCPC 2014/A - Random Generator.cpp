#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;

int main(){
    ll t;
    ll n, p;
    cin >> t;
    while (t--) {
        cin >> n >> p;
        ll ans = pow(2, n) - 1;
        printf("%.11f\n", ans * p / 100.0);
    }
    return 0;
}
