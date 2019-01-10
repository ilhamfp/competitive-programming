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
    int n, x, y, a, count = 0;
    vector<int> durability;
    cin >> n >> x >> y;
    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        if (a<=x)
        {
            count++;
        }
        durability.pb(a);
    }

    if (x>y)
    {
        cout << n << endl;
    } else {
        cout << ceil((double) count / 2.0) << endl;
    }
    
    return 0;
}


