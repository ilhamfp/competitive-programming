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
    int n, k, x;
    cin >> n >> k;
    map<int, int> m;
    int maxNilai = 0;
    for (int i = 0; i < n; ++i)
    {
        cin>>x;
        m[x]++;
        maxNilai = max(m[x], maxNilai);
    }

    int banyakDish = ceil( (double)maxNilai/ (double)k );
    int appropriateAmount = banyakDish * k;
    int ans = 0;
    for (auto p : m)
    {
        ans += appropriateAmount - p.second;
    }
    cout << ans << endl;
    return 0;
}