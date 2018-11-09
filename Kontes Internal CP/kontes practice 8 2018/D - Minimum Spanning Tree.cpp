#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };

bool visited[10005];
vector < pair<ll, int> > adj[10005];

ll solve(){
    priority_queue< pair<ll, int>, vector< pair<ll, int> >, greater< pair<ll, int> > > q;
    ll jaw = 0;
    
    q.push(mp(0, 1));
    while(!q.empty()){
        pair<ll, int> cur = q.top();
        q.pop();
        int x = cur.second, y;
        if (!visited[x])
        {
            visited[x] = true;
            jaw += cur.first;

            for (int i = 0; i < adj[x].size(); ++i)
            {
                y = adj[x][i].second;
                if (!visited[y])
                {
                    q.push(adj[x][i]);
                }
            }
        }
    }

    return jaw;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int x, y;
    ll w;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        cin >> x >> y >> w;
        adj[x].pb( mp(w, y) );
        adj[y].pb( mp(w, x) );
    }
    cout << solve() << endl;
    return 0;
}