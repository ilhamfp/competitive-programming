#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };
bool debug = false;
int n, x;
map<int, vector<int>> graph;
map<int, int> anak;
map<int, int> banyakAnak;

int dfs(int index){
    if (graph[index].size() == 0)
    {
        anak[index] = 1;
        return 1;
    } else {
        for (int i = 0; i < graph[index].size(); ++i)
        {
            anak[index] += dfs(graph[index][i]);
        }
        return anak[index];
    }
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    cin >> n;

    for (int i = 2; i <= n; ++i)
    {
        cin >> x;
        graph[x].pb(i);
    }

    dfs(1);
    for(auto p: anak){
        banyakAnak[p.second]++;
    }

    if (debug)
    {
       for (int i = 1; i <= n; ++i)
        {
            printf("junction %d punya anak %d\n", i, anak[i] );
        } 

        for (int i = 1; i <= n; ++i)
        {
            printf("yang punya banyakAnak %d adalah %d\n", i, banyakAnak[i] );
        }
    }  

    int sum = banyakAnak[1];
    if (debug)
    {
        cout << sum << endl;
    }
    int counter = 1;
    for (int i = 1; i <= n; ++i)
    {
        if (sum < i)
        {
            do{
                counter++;
                sum += banyakAnak[counter];
            }while(sum < i);
        }

        cout << counter << " ";
        
    }
    cout << endl;
    return 0;
}
