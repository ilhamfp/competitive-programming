#include <bits/stdc++.h>

using namespace std;
 
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
 
typedef long long ll;
int k;
map<int, pii> mapAnswer;
int sumInput[200005];
map<int,int> mapInput[200005];

int main(){
    // printf("%d %d\n", mapAnswer[1].fi, mapAnswer[1].se );

    cin>>k;
    for (int i = 1; i <= k; ++i)
    {
        int n, tempSum = 0;
        cin>>n;
        for (int j = 1; j <= n; ++j)
        {
            int x;
            cin>>x;
            tempSum+=x;
            if (mapInput[i][x] == 0)
            {
                mapInput[i][x] = j;
            }
        }
        sumInput[i] = tempSum;
    }
    

    for (int i = 1; i <= k; ++i)
    {
        for (auto p : mapInput[i])
        {
            int newSum = sumInput[i]-p.fi;
            if (mapAnswer[newSum].fi == 0 && mapAnswer[newSum].se == 0)
            {
                mapAnswer[newSum] = mp(i,mapInput[i][p.fi]);
            } else {
                printf("YES\n");
                printf("%d %d\n", mapAnswer[newSum].fi, mapAnswer[newSum].se);
                printf("%d %d\n",i, mapInput[i][p.fi] );
                return 0;
            }
        }
    }

    printf("NO\n");
    return 0;
}