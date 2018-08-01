#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;
int n,q;
map<int, vector<int>> m;
map<int, int> in;
map<int, int> out;
vector<int> ans;
int counter = 0;
void dfs(int i){
    counter++;
    in[i] = counter;
    ans.pb(i);

    for (int j = 0; j < m[i].size(); ++j)
    {
        dfs(m[i][j]);
    }

    out[i] = counter;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);   
    cin>>n>>q;
    for (int i = 2; i <= n; ++i)
    {
        int x;
        cin>>x;
        m[x].pb(i);
    }

    dfs(1);

    for (int i = 0; i < q; ++i)
    {
        int u,k;
        cin>>u>>k;
        if (in[u]+k-1 > out[u])
        {
            cout<<-1<<endl;
        } else {
            cout<<ans[in[u]+k-2]<<endl;
        }
    }
    return 0;
}
