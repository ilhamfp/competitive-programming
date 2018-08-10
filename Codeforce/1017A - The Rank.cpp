#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;

bool cmp(pii a, pii b){
    if (a.first == b.first)
    {
        return a.second <b.second;
    } else {
        return a.first > b.first;
    }
}

int main(){
    int n;
    cin>>n;
    vector<pii> table;

    for (int i = 1; i <= n; ++i)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int score = a+b+c+d;
        table.pb({score,i});
    }
    sort(table.begin(), table.end(),cmp);
    for (int i = 0; i < table.size(); ++i)
    {
        if (table[i].second == 1)
        {
            cout<<i+1<<endl;
            return 0;
        }
    }
    return 0;
}
