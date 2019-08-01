#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int n, x, y;
    vector<int> v;
    cin >> n >> x >> y;

    for (int i = 0; i < n; ++i)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }

    for (int d = 0; d < n; ++d)
    {
        bool bisa = true;
        for (int j = max(0,d-x); j < d; ++j)
        {
            if (v[d] >= v[j])
            {
                bisa = false;
            }
        }

        if (bisa)
        {
            for (int j = d+1; j <= min(d+y, n-1); ++j)
            {
                if (v[d] >= v[j])
                {
                    bisa = false;
                }
            }
        }

        if (bisa)
        {
            cout << d+1 << endl;
            return 0;
        }

    }


    

    return 0;
}

