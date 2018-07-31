#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back 
#define pii pair< int , int >
#define pll pair< long , long >
#define pi acos(-1.0)
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define MOD 10e9+7

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 
using namespace std;

pair<int,int> arah[4] = { {0,1}  , {1,0} , {0,-1} , {-1,0} };
char tab[201][201];
int visited[201][201];
int n,m;
int nAwal, mAwal, nAkhir, mAkhir, obsAwal;
vector< tuple<int,int,int> > jawaban;

int main()
{
    int t;
    cin>>t;
    for (int caseKe = 1; caseKe <= t; ++caseKe)
    {
        jawaban.clear();
        memset(visited, 0, sizeof(visited));
        cin>>n>>m;
        for (int j = 0; j < n; ++j)
        {
            string s;
            cin>>s;
            for (int k = 0; k < m; ++k)
            {
                tab[j][k] = s[k];
            }
        }
        cin>>nAwal>>mAwal;
        cin>>nAkhir>>mAkhir;

        if (tab[nAwal][mAwal] == '#')
        {
            obsAwal = -1;
        } else {
            obsAwal = 0;
        }
        auto tempInputAwal = make_tuple(obsAwal,nAwal,mAwal);
        priority_queue<tuple<int,int,int>> q;
        q.push(tempInputAwal);

        while(!q.empty()){
            auto temp = q.top();
            q.pop();
            for (int i = 0; i < 4; ++i)
            {
                int banyakObsTemp = get<0>(temp);
                int nTemp = get<1>(temp) + arah[i].first;
                int mTemp = get<2>(temp) + arah[i].second;
                if ( ( ( (nTemp>=0) && (nTemp<n) ) && ( (mTemp>=0) && (mTemp< m) ) ) )
                {
                    if ((!visited[nTemp][mTemp]))
                    {
                        if ( (nTemp == nAkhir) && (mTemp == mAkhir) )
                        {

                            if (tab[nTemp][mTemp] == '.')
                            {
                                jawaban.pb( make_tuple(banyakObsTemp,nTemp,mTemp) );
                                // printf("Masuk %d\n", banyakObsTemp );      
                            } else if (tab[nTemp][mTemp] == '#'){
                                jawaban.pb( make_tuple(banyakObsTemp-1,nTemp,mTemp) );
                                //printf("Masuk %d\n", banyakObsTemp+1 );
                            }
                        } else {
                            if (tab[nTemp][mTemp] == '.')
                            {
                                visited[nTemp][mTemp] = 1;
                                auto tempMasukQueue = make_tuple(banyakObsTemp,nTemp,mTemp);
                                q.push(tempMasukQueue);
                                          
                            } else if (tab[nTemp][mTemp] == '#'){
                                
                                visited[nTemp][mTemp] = 1;
                                auto tempMasukQueue = make_tuple(banyakObsTemp-1,nTemp,mTemp);
                                q.push(tempMasukQueue);
                            }
                        }
                    }
                    
                }
            }
        }

        int jawabanNya = -2147483630;
        for (int i = 0; i < jawaban.size(); ++i)
        {
            auto isiJawaban = jawaban[0];
            jawabanNya = max(jawabanNya, get<0>(isiJawaban));
        }

        cout<<"Case #"<<caseKe<<": "<<-1*jawabanNya<<endl;
    }

    return 0;
}
