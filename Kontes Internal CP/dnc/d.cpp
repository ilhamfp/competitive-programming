//Nama: Ilham Firdausi Putra
//NIM: ITB-13516140
#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back   
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

int t,n,c,x;
vector<int> v;


bool cek(int jarak){
    // printf("masuk cek\n");
    int ans = true;
    int posisi = v[0]+jarak;
    for (int i = 2; i <= c; ++i)
    {
        auto temp = lower_bound(v.begin(), v.end(), posisi);
        // cout<<posisi<<endl;
        // cout<<v[temp-v.begin()]<<endl;
        if (temp != v.end())
        {
            posisi = v[temp-v.begin()] + jarak;
        } else {
            ans = false;
            break;
        }
    }

    return ans;
}

int main() {
    cin>>t;
    while(t--){
        v.clear();
        cin>>n>>c;
        for (int i = 0; i < n; ++i)
        {
            cin>>x;
            v.pb(x);
        }
        sort(v.begin(), v.end());
        int low = 0, high = v[v.size()-1];
        while(low != high){
            // printf("masuk loop %d %d\n", low, high);
            int mid = (high+low+1)/2;
            if (cek(mid))
            {
                // printf("true\n");
                low = mid;
            } else {
                // printf("false\n");
                high = mid-1;
            }
        }

        cout<<low<<endl;

    }

    return 0;
}