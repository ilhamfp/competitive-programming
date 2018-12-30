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
    int n;
    cin >> n;
    vector<int> faktor;
    for (int i = 1; i <= sqrt(n); ++i)
    {
        if (n%i == 0)
        {
            if (i*i == n)
            {
                faktor.pb(i);
            } else {
                faktor.pb(i);
                faktor.pb(n/i);
            }
        }
    }
    ll jawaban[faktor.size()];
    memset(jawaban, 0, sizeof(jawaban));
    for (int i = 0; i < faktor.size(); ++i)
    {
        ll banyak = ((n-1)/faktor[i])+1;
        jawaban[i] = ((banyak)*(2+((banyak-1)*faktor[i])))/2;
        // cout << faktor[i] << " " << banyak << " " << jawaban[i]<< endl;
    }

    sort(jawaban, jawaban+faktor.size());
    jawaban[0] = 1;
    for (int i = 0; i < faktor.size(); ++i)
    {
        cout << jawaban[i] << " ";
    }
    cout << endl;
    return 0;
}


