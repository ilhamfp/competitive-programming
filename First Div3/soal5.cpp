#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back   
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 
using namespace std;

vector<int> tab[200055];
int visited[200055];

int main()
{
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < m; ++i)
    {
        int v1,v2;
        cin>>v1>>v2;
        tab[v1].pb(v2);
        tab[v2].pb(v1);
    }
    int ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (visited[i]==0 && !tab[i].empty())
        {
            // printf("MASUK KE %d\n",i );
            bool cycles = false;
            visited[i]=1;
            stack<pair<int,int>> stackKunjungi;
            if (tab[i].size() != 2)
            {
                continue;
            }
            for (int j = 0; j < tab[i].size(); ++j)
            {
                stackKunjungi.push(mp(tab[i][j],0));
            }


            while(!stackKunjungi.empty()){
                auto tempAwal = stackKunjungi.top();
                int dikunjungi = tempAwal.first;
                stackKunjungi.pop();
                if (tab[dikunjungi].size() != 2)
                {
                    cycles=false;
                    break;
                }
                if (visited[dikunjungi]==0)
                {
                    visited[dikunjungi] = 1;

                    // printf("masuk1 %d\n", dikunjungi);
                    for (int j = 0; j < tab[dikunjungi].size(); ++j)
                    {   
                        // printf("masuk2 %d\n", dikunjungi);
                        if (tab[dikunjungi][j]==i && visited[i]==2){
                            cycles = false;
                        }
                        else if (tab[dikunjungi][j]==i && !cycles && visited[i]==1)
                        {
                            // printf("masuk3 %d\n", dikunjungi);
                            if(tempAwal.second != 0){
                                cycles = true;
                                visited[i] = 2;
                            }
                        } else if (visited[tab[dikunjungi][j]] == 0)
                        {
                            stackKunjungi.push(mp(tab[dikunjungi][j],tempAwal.second+1));
                        }
                    }
                }
            }
            if (cycles)
            {
                ans++;
                // printf("MASUK DI %d\n",i );
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}