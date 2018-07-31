#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;

pii arah[4] = { {0,1} , {1,0} , {0,-1} , {-1,0} };
string tab[1005];

int main(){
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin>>s;
        tab[i] = s;
    }
    queue< tuple<int,int,int> >container;
    if (tab[0][0]!='#')
    {
        auto firstInput = make_tuple(0,0,0);
        tab[0][0] = '#';
        container.push(firstInput);
        
        while(!container.empty()){
            auto temp = container.front();
            container.pop();
            
            // printf("Masuk %d %d\n", get<0>(temp), get<1>(temp) );
            for (int i = 0; i < 4; ++i)
            {
                int rTemp = get<0>(temp) + arah[i].first;
                int cTemp = get<1>(temp) + arah[i].second;
                if ( ( (rTemp>=0) && (rTemp<n) ) && ( (cTemp>=0) && (cTemp<m) ) )
                {
                    if (tab[rTemp][cTemp] == '.' && rTemp == n-1 && cTemp == m-1){
                        printf("%d\n", get<2>(temp)+1);
                        return 0;
                    } else if (tab[rTemp][cTemp] == '.')
                    {
                        auto tempMasukContainer = make_tuple(rTemp,cTemp,get<2>(temp)+1);
                        tab[rTemp][cTemp] = '#';
                        container.push(tempMasukContainer);
                    }  
                }
            }
        }
    }
    printf("-1\n");
    return 0;
}