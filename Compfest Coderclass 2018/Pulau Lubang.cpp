#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;

pii arah[4] = { {0,1} , {1,0} , {0,-1} , {-1,0} };
string tab[105];
int banyak = 0;
int terbesar = 0;
int besar = 0;
int n,m;


void dfs(int row, int col){
    tab[row][col] = '#';
    besar++;
    for (int i = 0; i < 4; ++i)
    {
        int rTemp = row + arah[i].first;
        int cTemp = col + arah[i].second;
        if ( ( (rTemp>=0) && (rTemp<n) ) && ( (cTemp>=0) && (cTemp<m) ) )
        {
            if (tab[rTemp][cTemp] == '.')
            {
                dfs(rTemp,cTemp);
            } 
        }
        
    }
}

int main(){
    cin>>n>>m;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin>>s;
        tab[i] = s;
    }

    for (int r = 0; r < n; ++r)
    {
        for (int c = 0; c < m; ++c)
        {
            if (tab[r][c] == '.')
            {
                banyak++;
                besar = 0;
                dfs(r,c);
                terbesar = max(terbesar,besar);
            }
        }
    }
    printf("%d %d\n",banyak,terbesar);
    return 0;
}