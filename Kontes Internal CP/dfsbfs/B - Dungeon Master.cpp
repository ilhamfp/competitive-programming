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
#define INF_INT 2147483647

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 
using namespace std;

tuple<int,int,int> arah[6] = { {0,0,1}  , {0,1,0} , {0,0,-1} , {0,-1,0} , {1,0,0}, {-1,0,0} };

int visited[50][50][50];
int tab[50][50][50];

int main() {
    int l,r,c;
    while( (scanf("%d %d %d", &l, &r, &c) != EOF) && (l+r+c) ){
        memset(visited,0,sizeof(visited));
        memset(tab,0,sizeof(tab));
        int awalL, awalX, awalY;
        for (int i = 0; i < l; ++i)
        {
            for (int j = 0; j < r; ++j)
            {
                string s;
                cin>>s;
                for (int k = 0; k < c; ++k)
                {
                    if(s[k] == 'S')  
                    {  
                        awalL = i;  
                        awalY = j;  
                        awalX = k;  
                    }
                    tab[i][j][k] = s[k];
                }
            }
        }
        
        int jawaban = INF_INT;
        queue< tuple<int,int,int,int> > q;
        auto temp = make_tuple(awalL,awalX,awalY,0);
        visited[awalL][awalY][awalX] = 1;
        q.push(temp);
        bool ketemu = false;

        while(!q.empty()){
            auto temp = q.front();
            q.pop();

            for (int i = 0; i < 6; ++i)
            {
                int levelTemp = get<0>(temp) + get<0>(arah[i]);
                int xTemp = get<1>(temp) + get<1>(arah[i]);
                int yTemp = get<2>(temp) + get<2>(arah[i]);
                int nilaiTemp = get<3>(temp) + 1;
                if (( ( (levelTemp>= 0) && (levelTemp<l) ) && ( (xTemp>=0) && (xTemp<c) ) && ( (yTemp>=0) && (yTemp<=r) ) ) && (!visited[levelTemp][yTemp][xTemp]) )
                {
                    if (tab[levelTemp][yTemp][xTemp] == '.')
                    {
                        visited[levelTemp][yTemp][xTemp] = 1;
                        auto tempMasukQueue = make_tuple(levelTemp,xTemp,yTemp,nilaiTemp);
                        q.push(tempMasukQueue);
                    } else if (tab[levelTemp][yTemp][xTemp] == 'E'){
                        ketemu = true;
                        jawaban = min(jawaban, nilaiTemp);
                    }
                }
                
            }
        }

        if (ketemu)
        {
            printf("Escaped in %d minute(s).\n", jawaban );
        } else {
            printf("Trapped!\n");
        }
    }

    return 0;
}