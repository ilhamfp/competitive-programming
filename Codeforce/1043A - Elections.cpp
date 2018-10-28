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
    int n, x, maks = -1;
    int  totalElodreip = 0;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        v.pb(x);
        maks = x > maks? x : maks;

        totalElodreip += x;
    }

    int totalAwruk = 0;
    for (int i = 0; i < v.size(); ++i)
    {
        totalAwruk += (maks - v[i]);
    }

    bool belumKetemu = true;
    while(belumKetemu){
        if (totalAwruk > totalElodreip)
        {
            cout << maks << endl;
            return 0;
        } else {
            maks++;
            totalAwruk += v.size();
        }
    }
}