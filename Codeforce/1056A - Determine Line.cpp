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
    int n, r, x, a[105];
    memset(a, 0, sizeof(a));
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> r;
        for (int j = 0; j < r; ++j)
        {
            cin >> x;
            a[x]++;
        }
    }

    for (int i = 1; i <= 100; ++i)
    {
        if (a[i]==n)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}