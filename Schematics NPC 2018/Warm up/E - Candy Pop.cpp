#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;
typedef unsigned long long ull;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };

bool cmp (int i,int j) { return (i>j); }

int main()
{
    ll m;
    cin>>m;
    ll banyak[4];
    cin>>banyak[1]>>banyak[2]>>banyak[3];
    vector<ll> v[4];

    //Inisiasi
    for (int i = 1; i <= 3; ++i)
    {
        v[i].pb(0);
    }

    //Isi
    for (ll i = 1; i <= 3; ++i)
    {
        ll sum = 0;
        for (ll j = 0; j < banyak[i]; ++j)
        {
            ll x;
            cin>>x;
            sum+=x;

            if (sum<=m)
            {
                v[i].pb(sum);
            }
        }
    }

    //Cari jawaban
    ll jaw = 0;
    ll banyakPertama=0, banyakKedua=0, tumpukanPertama=1, tumpukanKedua=2;
    for (ll i = 1; i <= 2; ++i)
    {
        for (ll j = i+1; j <=3; ++j)
        {
            ll indexI = v[i].size()-1;
            ll indexJ = v[j].size()-1;
            // cout<<indexI<<" "<<indexJ<<endl;

            //Kalibrasi index J
            while((v[i][indexI] + v[j][indexJ])>m){
                indexJ--;
            }


            //Kurangi index I satu persatu sambil menambah indeks J
            do{
                if ((indexI+indexJ)>jaw)
                {
                    jaw = (indexI+indexJ);
                    tumpukanPertama = i;
                    tumpukanKedua = j;
                    banyakPertama = indexI;
                    banyakKedua = indexJ;
                }
                indexI--;
                while((v[i][indexI] + v[j][indexJ])<=m){
                    // cout<<"stuck: "<<indexI<<endl;
                    if (indexJ+1 <= v[j].size()-1)
                    {
                        if ((v[i][indexI] + v[j][indexJ+1])<=m)
                        {
                            indexJ++;
                        } else {
                            break;
                        }
                    } else {
                        break;
                    }
                }
            }while(indexI>0);

            if ((indexI+indexJ)>jaw)
            {
                jaw = (indexI+indexJ);
                tumpukanPertama = i;
                tumpukanKedua = j;
                banyakPertama = indexI;
                banyakKedua = indexJ;
            }

        }
    }

    cout<<jaw<<endl;
    cout<<banyakPertama<<" "<<tumpukanPertama<<endl;
    cout<<banyakKedua<<" "<<tumpukanKedua<<endl;

    
    return 0;
}