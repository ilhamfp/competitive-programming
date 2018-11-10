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
    int n,s;
    cin >> n >> s;
    s--;
    vector < int > v1, v2;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v1.pb(x);
    }
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v2.pb(x);
    }
    bool ada = false;
    for (int i = s; i < n; ++i)
    {
        if (v1[i] == 1 && v2[i] == 1 && v2[s] == 1)
        {
            ada = true;
            break;
        }
    }
    if (v1[0] == 1 && (v1[s] == 1 || (v2[s] == 1 && ada)) )
    {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}