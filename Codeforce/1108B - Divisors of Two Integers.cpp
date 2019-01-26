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
    map<int, int> hitung;
    int maksimum = -1;
    cin >> n;
    vector <int> v;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        maksimum = max(x, maksimum);
        hitung[x]++;
    }

    for (int i=1; i<=sqrt(maksimum); i++) 
    { 
        if (maksimum%i == 0) 
        { 
            if (maksimum/i == i) {
                hitung[i]--;
            } else {
                hitung[i]--;
                hitung[maksimum/i]--;
            }
        } 
    } 
    int maksimum2 = -1;
    for (auto p : hitung)
    {
        if (p.second == 1)
        {
            maksimum2 = max(maksimum2, p.first);
        }
    }

    cout << maksimum << " " << maksimum2 << endl;

    return 0;
}


