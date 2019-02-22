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
    int n, x;
    vector<int> v;
    cin >> n;
    int totalOdd = 0, totalEven = 0;

    for (int i = 1; i <= n; ++i)
    {
        cin >> x;
        v.pb(x);
        if (i%2)
        {
            totalOdd += x;
        } else {
            totalEven += x;
        }
    }

    int ans = 0;

    int curOdd = 0, curEven = 0;

    for (int i = 0; i < v.size(); ++i)
    {
        if ((i+1)%2)
        {
            if ( (curOdd+(totalEven-curEven)) == (curEven+(totalOdd-v[i]-curOdd)) )
            {
                ans++;
            }
        } else {
            if ( (curOdd+(totalEven-v[i]-curEven)) == (curEven+(totalOdd-curOdd)) )
            {
                ans++;
            }
        }

        if ((i+1)%2)
        {
            curOdd += v[i];
        } else {
            curEven += v[i];
        }
    }

    cout << ans << endl;
    return 0;
}


