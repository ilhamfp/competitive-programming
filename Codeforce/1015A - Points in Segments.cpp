#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;
typedef unsigned long long ull;
int n,m;

int main(){
    cin>>n>>m;
    int ans[m+1];
    memset(ans,0,sizeof(ans));

    for (int i = 0; i < n; ++i)
    {
        int l,r;
        cin>>l>>r;
        for (int j = l; j <=r; ++j)
        {
            ans[j]++;
        }
    }
    vector<int> jaw;
    for (int i = 1; i <=m; ++i)
    {
        if (ans[i]==0)
        {
            jaw.pb(i);
        }
    }
    cout<<jaw.size()<<endl;
    for (int i = 0; i < jaw.size(); ++i)
    {
        cout<<jaw[i]<<" ";
    }
    cout<<endl;
    return 0;
}
