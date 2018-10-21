#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;
long long const MODULO = 998244353;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };


int main()
{
    int n, m, s;
    cin >> n >> m >> s;
    ll ans = m;
    int l = 2;
    int r = n;
    int oldl = 2;
    while (l <= r) 
    { 
        int mid = (l + r)/  2; 
        ans+= ( (mid - (oldl)) *m ) + s;
        // cout<<" "<<l<<" "<<mid<<" "<<r<<endl;
        // cout<<ans<<endl;

        l = mid + 1;
        oldl = mid;
    } 
    cout<<ans<<endl;

    return 0;
}
// 1, 2
// 2 3 4 = 4 + 3 = 7
// 2 3 4 5 = 4 + 3 + 3 = 9
// 3, 4 
// 2 3 4 5 6 =  5 + 3 + 3 = 11
// 2 3 4 5 6 7 = 5 + 4 + 3 = 12
