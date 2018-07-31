#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back   
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 
using namespace std;
vector<ll> v;
vector<ll> coba(vector<ll> state, vector<ll> sisa){
    if (sisa.empty())
    {
        return state;
    } else {
        vector<ll> jawaban1;
        vector<ll> jawaban2;
        vector<ll> state1 = state;
        vector<ll> state2 = state;
        vector<ll> sisa1 = sisa;
        vector<ll> sisa2 = sisa;
        ll nilaiTerakhir = state[state.size()-1];
        ll nilaiTerakhir1 = -1;
        if (nilaiTerakhir%3 == 0)
        {
            nilaiTerakhir1= nilaiTerakhir/3;
        }
        ll nilaiTerakhir2 = nilaiTerakhir*2;
        auto cari1 = find(sisa1.begin(), sisa1.end(),nilaiTerakhir1);
        auto cari2 = find(sisa2.begin(), sisa2.end(),nilaiTerakhir2);
        if (cari1 != sisa1.end())
        {
            state1.pb(nilaiTerakhir1);
            sisa1.erase(cari1,cari1+1);
            jawaban1 = coba(state1,sisa1);
        }
        if (cari2 != sisa2.end())
        {
            state2.pb(nilaiTerakhir2);
            sisa2.erase(cari2,cari2+1);
            jawaban2 = coba(state2,sisa2);
        }
        if (jawaban1.size() == v.size())
        {
            return jawaban1;
        } else
        {
            return jawaban2;
        }
    }

}

int main()
{
    ll n;
    cin>>n;
    for (ll i = 0; i < n; ++i)
    {
        ll x;
        cin>>x;
        v.pb(x);
    }

    vector<ll> ans;
    for (ll i = 0; i < v.size(); ++i)
    {
        vector<ll> temp = v;
        vector<ll> tempAns;
        ll besar = temp.size();
        tempAns.pb(v[i]);
        auto hilangkan = find(temp.begin(), temp.end(),v[i]);
        temp.erase(hilangkan,hilangkan+1);
        vector<ll> tempJawaban = coba(tempAns,temp);
        if (tempJawaban.size()==v.size())
        {
            ans = tempJawaban;
            break;
        }
    }
    for (ll i = 0; i < ans.size(); ++i)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}