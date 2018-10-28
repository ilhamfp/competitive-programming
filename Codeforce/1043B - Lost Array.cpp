#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };

bool cmp (int i,int j) { return (i>j); }

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int n, x;
    cin >> n;
    vector<int> v;
    vector<int> diff;
    v.pb(0);
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        v.pb(x);
        diff.pb(x-v[i]);
    }

    // for (int i = 0; i < diff.size(); ++i)
    // {
    //     cout<<diff[i]<<" ";
    // }
    
    vector<int> jawaban;
    int banyak = 0;

    for (int i = 1; i <= diff.size(); ++i)
    {
        int pengulangan = ceil(diff.size()/i);
        int hitung = i-1;
        bool bisa = true;
        for (int j = 0; j < pengulangan && bisa; ++j)
        {
            for (int k = 0; k < i; ++k)
            {
                hitung++;
                if (hitung < diff.size())
                {
                    if (diff[k] != diff[hitung] ){
                        bisa = false;
                    }
                }
                
            }
        }

        if (bisa)
        {
            jawaban.pb(i);
        }
    }

    cout << jawaban.size() << endl;
    for (int i = 0; i < jawaban.size(); ++i)
    {
        cout << jawaban[i];
        if (i != jawaban.size()-1)
        {
            cout<<" ";
        }
    }
    cout << endl;
    return 0;
}