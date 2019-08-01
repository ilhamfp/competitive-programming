#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;

const int MAX = 2e5 + 5;
int t[MAX], p[MAX], x[MAX], final_p[MAX];


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int n;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v.pb(x);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        cin >> t[i];
        if (t[i] == 1)
        {
            cin >> p[i] >> x[i];
            p[i]--;
        } else {
            cin >> x[i];
        }
    }

    int max_dua = 0;
    memset(final_p, -1, sizeof(final_p));
    for (int i = q-1; i>= 0; --i)
    {   
        if (t[i] == 2)
        {
            max_dua = max(max_dua, x[i]);
        } else {
            if (final_p[p[i]] == -1)
            {
                if (x[i] > max_dua)
                {
                    final_p[p[i]] = x[i];
                } else {
                    final_p[p[i]] = max_dua;
                }
            }
        }
    }


    for (int i = 0; i < n; ++i)
    {
        if (final_p[i] == -1)
        {
            if (v[i] > max_dua)
            {
                final_p[i] = v[i];
            } else {
                final_p[i] = max_dua;
            }
        }
        cout << final_p[i] << " ";
    }

    return 0;
}

