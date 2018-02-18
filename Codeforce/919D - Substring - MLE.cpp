#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define mp make_pair
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = 1e9;
const double EPS = 1e-9;
const double PI = acos(-1);
#define nl printf("\n");
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 

int n,m;
string s;
vector<string> v;
int jawaban = -1;

class Graph
{
    int V;
    vector<int> *adj;
    bool isCyclicUtil(int v, bool visited[], bool *rs); 
    void cariUtil(int , int , bool [], int [], int &);
public:
    Graph(int V);
    void addEdge(int v, int w);
    bool isCyclic();
    void cari(int s, int d);
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new vector<int>[V];
}
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); 
}
 

bool Graph::isCyclicUtil(int v, bool visited[], bool *recStack)
{
    if(visited[v] == false)
    {

        visited[v] = true;
        recStack[v] = true;

        vector<int>::iterator i;
        for(i = adj[v].begin(); i != adj[v].end(); ++i)
        {
            if ( !visited[*i] && isCyclicUtil(*i, visited, recStack) )
                return true;
            else if (recStack[*i])
                return true;
        }
 
    }
    recStack[v] = false;
    return false;
}
 
bool Graph::isCyclic()
{

    bool *visited = new bool[V];
    bool *recStack = new bool[V];
    for(int i = 0; i < V; i++)
    {
        visited[i] = false;
        recStack[i] = false;
    }

    for(int i = 0; i < V; i++)
        if (isCyclicUtil(i, visited, recStack))
            return true;
 
    return false;
}


void Graph::cari(int s, int d)
{

    bool *visited = new bool[V];

    int *path = new int[V];
    int path_index = 0; 

    for (int i = 0; i < V; i++)
        visited[i] = false;
 

    cariUtil(s, d, visited, path, path_index);
}
 
void Graph::cariUtil(int u, int d, bool visited[], int path[], int &path_index)
{

    visited[u] = true;
    path[path_index] = u;
    path_index++;
 
    if (u == d)
    {
        // printf("MASUK juga\n");
        int tempHasil = -1;
        map<char, int> m;
        for (int i = 0; i<path_index; i++)
        {
            m[s[path[i]]]++;
        }

        for (auto p : m)
        {
            tempHasil = max(tempHasil, p.second);
        }
        jawaban = max(jawaban,tempHasil);

    }
    else 
    {
        vector<int>::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
            if (!visited[*i])
                cariUtil(*i, d, visited, path, path_index);
    }
 

    path_index--;
    visited[u] = false;
}
 
int main()
{
    cin>>n>>m;
    cin>>s;
    Graph g(n);
    for (int i = 0; i < m; ++i)
    {
        int x,y;
        cin>>x>>y;
        g.addEdge(x-1,y-1);
    }
 
    if(g.isCyclic())
    {
        cout<<-1<<endl;
    } else {
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (j!=i)
                {
                    g.cari(i, j);
                }
            }
        }

        cout<<jawaban<<endl;
    }
    
    return 0;
}


