#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;
typedef unsigned long long ull;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };

bool cmp (int i,int j) { return (i>j); }
vector<int> tab[1000];
int visited[1000];



void dfs(int node){
    if (node==0)
    {
        cout<<node;
    } else {
        cout<<" "<<node;
    }
    for (int i = 0; i < tab[node].size(); ++i)
    {
        if (!visited[tab[node][i]])
        {
            visited[tab[node][i]] = 1;
            dfs(tab[node][i]);
        }
    }
}

int main()
{
    int n;
    cin>>n;
    memset(tab,0,sizeof(tab));
    memset(visited,0,sizeof(visited));
    for (int i = 0; i < n-1; ++i)
    {
        int x,y;
        cin>>x>>y;
        tab[x].pb(y);
        tab[y].pb(x);
    }
    visited[0] = 1;
    dfs(0);
    cout<<endl;
    return 0;
}