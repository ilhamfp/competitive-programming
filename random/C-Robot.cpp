#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back   
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 
using namespace std;
int n,m,c;
vector<vector<int>> arr;

bool isTopEmpty(vector<vector<int>> state){
    bool topEmpty = true;
    for (int i = 0; i <= m+1; ++i)
    {
        if (state[0][i]>0 )
        {
            topEmpty = false;
            break;
        }
    }
    return topEmpty;
}

pair< tuple< vector<vector<int>> ,int,int,int,int>, tuple< vector<vector<int>> ,int,int,int,int> > cariJalan(vector<vector<int>> state, int rAwal, int cAwal, int candyAwal, int secondAwal){
    vector<vector<int>> stateCopy2;
    for (int i = 0; i < n ; ++i)
    {
        vector<int> temp;
        for (int j = 0; j < state[i].size(); ++j)
        {
                temp.pb(state[i][j]);
        }
        stateCopy2.pb(temp);
    }
    vector<vector<int>> stateCopy1;
    for (int i = 0; i < n ; ++i)
    {
        vector<int> temp;
        for (int j = 0; j < state[i].size(); ++j)
        {
                temp.pb(state[i][j]);
        }
        stateCopy1.pb(temp);
    }
    tuple<vector<vector<int>>,int,int,int,int> kiri,kanan;
    //Cari jalan ke kanan
    for (int i = cAwal; i <= m+1 ; ++i)
    {
        if (stateCopy1[rAwal][i]==-1 && i!=0)
        {   
            if (rAwal == 0)
            {
                kanan = make_tuple(stateCopy1,rAwal,i,candyAwal,secondAwal+abs(i - cAwal));
            } else {
                kanan = make_tuple(stateCopy1,rAwal-1,i,candyAwal,secondAwal+abs((i - cAwal) + 1));

            }
            break;
        } else if (stateCopy1[rAwal][i] > 0){
            int tambah = stateCopy1[rAwal][i];
            stateCopy1[rAwal][i] = 0;
            kanan = make_tuple(stateCopy1,rAwal,i,candyAwal+tambah,secondAwal+abs(i - cAwal));
            break;
        }
    }
    //Cari jalan ke kiri
    for (int i = cAwal; i >= 0; --i)
    {
        if (stateCopy2[rAwal][i]==-1 && i!=m+1)
        {
            if (rAwal == 0)
            {
                kiri = make_tuple(stateCopy2,rAwal,i,candyAwal,secondAwal+abs(cAwal - i));
            } else {
                kiri = make_tuple(stateCopy2,rAwal-1,i,candyAwal,secondAwal+abs((cAwal - i) + 1));
            }
            break;
        } else if (stateCopy2[rAwal][i] > 0){
            int tambah = stateCopy2[rAwal][i];
            stateCopy2[rAwal][i] = 0;
            kiri = make_tuple(stateCopy2,rAwal,i,candyAwal+tambah,secondAwal+abs(cAwal - i));
            break;
        }
    }
    return mp(kiri,kanan);
}

int jalan(vector<vector<int>> state, int rAwal, int cAwal, int candyAwal, int secondAwal){
    for (int i = 0; i < n ; ++i)
    {
        vector<int> temp;
        for (int j = 0; j < state[i].size(); ++j)
        {
            temp.pb(state[i][j]);
        }
        stateCopy1.pb(temp);
    }
    if ( ( (rAwal==0 && cAwal==0) || (rAwal==0 && cAwal==m+1) ) && (candyAwal >=c ) )
    {
        return secondAwal;
    } else if ( ( (rAwal==0 && cAwal==0) || (rAwal==0 && cAwal==m+1) ) && (candyAwal < c && isTopEmpty(stateCopy1)) ){
        return LONG_MAX;
    } else {
        auto init = cariJalan(stateCopy1,rAwal,cAwal,candyAwal,secondAwal);
        if ((rAwal==0 && cAwal==0))
        {
            return jalan(get<0>(init.second),get<1>(init.second),get<2>(init.second),get<3>(init.second),get<4>(init.second));
        } else if ((rAwal==0 && cAwal==m+1)){
            return jalan(get<0>(init.first),get<1>(init.first),get<2>(init.first),get<3>(init.first),get<4>(init.first));
        } else {
            int jawabanKiri = jalan(get<0>(init.first),get<1>(init.first),get<2>(init.first),get<3>(init.first),get<4>(init.first));
            int jawabanKanan = jalan(get<0>(init.second),get<1>(init.second),get<2>(init.second),get<3>(init.second),get<4>(init.second));
            return min(jawabanKiri,jawabanKanan);
        }
    }
}

int main()
{
    cin>>n>>m>>c;
    for (int i = 0; i < n ; ++i)
    {
        string s;
        cin>>s;
        vector<int> temp;
        for (int j = 0; j < s.size(); ++j)
        {
            if (s[j]=='|')
            {
                temp.pb(-1);
            } else {
                temp.pb(s[j]-'0');
            }
        }
        arr.pb(temp);
    }
    auto init = cariJalan(arr,n-1,0,0,0);
    int jawabanKiri = jalan(get<0>(init.first),get<1>(init.first),get<2>(init.first),get<3>(init.first),get<4>(init.first));
    int jawabanKanan = jalan(get<0>(init.second),get<1>(init.second),get<2>(init.second),get<3>(init.second),get<4>(init.second));
    cout<<min(jawabanKiri,jawabanKanan)<<endl;
    return 0;
}