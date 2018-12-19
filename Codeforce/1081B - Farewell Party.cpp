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
    map<int, int> countHat;
    map<int, bool> specialCase;
    map<int, int> specialCaseBanyakGrup;
    vector<int> v;
    bool ok = true;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        countHat[x]++;
        v.pb(x);
    }

    for(auto p: countHat){
        if (n - p.first !=  p.second)
        {
            if ((p.second % (n - p.first) == 0) && (p.first != 0))
            {
                specialCase[p.first] = true;
                specialCaseBanyakGrup[p.first] = p.second / (n - p.first);
            } else {
                ok = false;
            }
        }
    }

    if (ok)
    {
        cout << "Possible" << endl;
        int hitung = 1;
        map<int, bool> visited;
        map<int, int> nilai;
        map<int, int> banyakGrupSudah;
        for (int i = 0; i < v.size(); ++i)
        {   
            if (specialCase[v[i]])
            {
                if (!visited[v[i]])
                {
                    visited[v[i]] = true;
                    nilai[v[i]] = hitung;
                    banyakGrupSudah[v[i]] = 0;
                    hitung+=specialCaseBanyakGrup[v[i]];
                }
            } else {
                if (!visited[v[i]])
                {
                    visited[v[i]] = true;
                    nilai[v[i]] = hitung;
                    hitung++;
                }
            }

            cout << nilai[v[i]];
            if (specialCase[v[i]])
            {
                banyakGrupSudah[v[i]]++;
                if (banyakGrupSudah[v[i]] % (countHat[v[i]]/specialCaseBanyakGrup[v[i]]) == 0)
                {
                    nilai[v[i]]++;
                }
            }
            if (i != v.size()-1)
            {
                cout  << " ";
            }
        }
        cout << endl;
    } else {
        cout << "Impossible" << endl;
    }
    return 0;
}

// 1 1 1 2 2 2 3 3 3 4