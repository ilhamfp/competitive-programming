#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define fi first
#define se second   
#define pii pair< int , int >
#define pll pair< long , long >
#define pi acos(-1.0)
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define MOD 10e9+7
#define line puts("")
#define INF_INT -2147483647

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 
using namespace std;

string s = "ALLIZZWELL";

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };


char tab[1000][1000];
int visited[1000][1000];
int t,r,c;

bool dfs(int row, int col, int hitung){

    visited[row][col] = 1;
    if (hitung == 9)
    {
        return true;
    } else {
        for (int i = 0; i < 8; ++i)
        {
            int temprow = row+arah[i].fi;
            int tempcol = col+arah[i].se;
            if(temprow>=0 && temprow<r && tempcol>=0 && tempcol<c){
                if ( (tab[temprow][tempcol] == s[hitung+1]) && !visited[temprow][tempcol] )
                {
                    if (dfs(temprow,tempcol,hitung+1) )
                    {
                        return true;
                    }
                }
            }
        }
    }
    visited[row][col] = 0;
    return false;
}

int main() {
    cin>>t;
    for (int i = 0; i < t; ++i)
    {
        memset(visited, 0, sizeof(visited));
        cin>>r>>c;

        for (int j = 0; j < r; ++j)
        {
            string masuk;
            cin>>masuk;
            for (int k = 0; k < masuk.size(); ++k)
            {
                tab[j][k] = masuk[k];
            }
        }
        // for (int j = 0; j < r; ++j)
        // {
        //     for (int k = 0; k < c; ++k)
        //     {
        //         cout<<tab[j][k];
        //     }
        //     cout<<endl;
        // }
        bool bisa = false;

        for (int j = 0; j < r && !bisa; ++j)
        {
            for (int k = 0; k < c && !bisa; ++k)
            {
                if ( tab[j][k] == 'A' && dfs(j,k,0) )
                {
                    bisa = true;
                }
            }
        }

        if (bisa)
        {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}