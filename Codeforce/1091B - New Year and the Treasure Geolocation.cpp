#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };

bool cmpv11(pii a, pii b){
    return a.first > b.first;
}

bool cmpv12(pii a, pii b){
    return a.first < b.first;
}

bool cmpv21(pii a, pii b){
    return a.second > b.second;
}

bool cmpv22(pii a, pii b){
    return a.second < b.second;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int n;
    vector< pii > v1, v2;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x,y;
        cin >> x >> y;
        v1.pb(mp(x,y));
    }
    for (int i = 0; i < n; ++i)
    {
        int x,y;
        cin >> x >> y;
        v2.pb(mp(x,y));
    }

    sort(v1.begin(), v1.end(), cmpv11);
    sort(v2.begin(), v2.end(), cmpv12);

    int ans1 = v1[0].first + v2[0].first;

    sort(v1.begin(), v1.end(), cmpv21);
    sort(v2.begin(), v2.end(), cmpv22);
    int ans2 = v1[0].second + v2[0].second;
    cout << ans1 << " " << ans2 << endl;
    return 0;
}


