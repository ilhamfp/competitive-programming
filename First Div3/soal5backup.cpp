#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back   
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 
using namespace std;

vector<int> tab[100005];
int visited[100005];

// bool dfs(int row, int col, int hitung){

//     visited[row][col] = 1;
//     if (hitung == 9)
//     {
//         return true;
//     } else {
//         for (int i = 0; i < 8; ++i)
//         {
//             int temprow = row+arah[i].fi;
//             int tempcol = col+arah[i].se;
//             if(temprow>=0 && temprow<r && tempcol>=0 && tempcol<c){
//                 if ( (tab[temprow][tempcol] == s[hitung+1]) && !visited[temprow][tempcol] )
//                 {
//                     if (dfs(temprow,tempcol,hitung+1) )
//                     {
//                         return true;
//                     }
//                 }
//             }
//         }
//     }
//     visited[row][col] = 0;
//     return false;
// }

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
        if (visited[i]==0)
        {
            printf("MASUK KE %d\n",i );
            bool cycles = false;
            visited[i]=1;
            queue<int> queueKunjungi;
            vector<int> initTetangga;
            for (int j = 0; j < tab[i].size(); ++j)
            {
                queueKunjungi.push(tab[i][j]);
                initTetangga.pb(tab[i][j]);
            }
            cout<<initTetangga.size()<<endl;
            while(!queueKunjungi.empty()){
                int dikunjungi = queueKunjungi.front();
                queueKunjungi.pop();
                visited[dikunjungi] = 1;
                printf("masuk1 %d\n", dikunjungi);
                for (int j = 0; j < tab[dikunjungi].size(); ++j)
                {   
                    printf("masuk2 %d\n", dikunjungi);

                    if (tab[dikunjungi][j]==i)
                    {
                        printf("masuk3 %d\n", dikunjungi);
                        auto test = find(initTetangga.begin(), initTetangga.end(),dikunjungi);
                        if(test == initTetangga.end()){
                            cycles = true;
                        }
                    } else if (visited[tab[dikunjungi][j]] == 0)
                    {
                        queueKunjungi.push(tab[dikunjungi][j]);
                    }
                }
            }
            if (cycles)
            {
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}