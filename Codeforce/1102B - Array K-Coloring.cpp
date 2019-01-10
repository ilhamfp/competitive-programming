#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };

bool cmp1(pii a, pii b){
    return a.first < b.first;
}

bool cmp2(pii a, pii b){
    return a.second < b.second;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int n, k, x;
    vector<pii> v;
    map<int, int> counter;
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        v.pb(mp(x,i));
        counter[x]++;
    }

    bool bisa = true;
    for(auto p : counter){
        if (p.second>k)
        {
            bisa = false;
        }
    }

    if (bisa)
    {
        sort(v.begin(), v.end(), cmp1);
        for (int i = 1; i <= v.size(); ++i)
        {
            v[i-1] = mp((i-1)%(k) +1 , v[i-1].second);
        }
        sort(v.begin(), v.end(), cmp2);
    }


    if (bisa)
    {
        cout << "YES" << endl;
        for (int i = 0; i < v.size(); ++i)
        {
            cout << v[i].first << " ";
        }
        cout << endl;
    } else {
        cout << "NO" << endl;
    }

    
    return 0;
}


