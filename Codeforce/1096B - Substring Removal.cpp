#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };

ll MOD =      998244353;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 1;


    // hapus depan
    ll panjangAwal = 1;
    char init_char = s[0];
    for (ll i = 1; i < s.size(); ++i)
    {
        if (s[i]==init_char)
        {
            panjangAwal++;
        } else {
            break;
        }
    }

    if (panjangAwal == s.size())
    {
        ans--;
        for (ll i = 1; i <= panjangAwal; ++i)
        {
            ans += i;
            ans%= MOD;
        }
    } else {
        ans += panjangAwal;
    //     cout << panjangAwal << endl;
    // cout << ans%MOD << endl;

        // hapus belakang
        ll panjangAkhir = 1;
        char end_char = s[s.size()-1];
        for (ll i = s.size()-2; i >= 0; --i)
        {
            if (s[i]==end_char)
            {
                panjangAkhir++;
            } else {
                break;
            }
        }

        ans += panjangAkhir;
    //     cout << panjangAkhir << endl;
    // cout << ans%MOD << endl;

        // hapus depan belakang
        if (init_char == end_char)
        {
            ans+=(panjangAwal*panjangAkhir);
        }

    }

    cout << (ans%MOD) << endl;

    return 0;
}

