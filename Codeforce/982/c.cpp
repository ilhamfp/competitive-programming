#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back   
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 
using namespace std;

vector< vector<int> > graph;
int n;
int visit[100005];
int ans=0;

int dfs(int node){
    visit[node] = 1;
    int totalHitung = 0;
    for (int i = 0; i < graph[node].size(); ++i)
    {
        int nodeKunjung = graph[node][i];
        if (!visit[nodeKunjung])
        {
            int hitung = dfs(nodeKunjung);
            if (hitung % 2 == 0)
            {
                ans++;
            } else {
                totalHitung += hitung;
            }
        }
    }
    return totalHitung + 1;
}

int main()
{
    cin>>n;
    graph.resize(n+10);
    for (int i = 0; i < n-1; ++i)
    {
        int x,y;
        cin>>x>>y;
        graph[x].pb(y);
        graph[y].pb(x);
    }
    if (n%2 == 1)
    {
        cout<<-1<<endl;
    } else {
        
        dfs(1);
        cout<<ans<<endl;
    }
    return 0;
}