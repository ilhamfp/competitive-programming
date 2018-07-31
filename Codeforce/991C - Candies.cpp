#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;

ll n;
bool cek(ll k){
    ll banyakVasya = 0;
    ll banyakPetya = 0;
    ll sisa = n;
    while(sisa){
        if (sisa>=k)
        {
            sisa-=k;
            banyakVasya+=k;
        } else {
            banyakVasya+=sisa;
            sisa-=sisa;
        }
        if (sisa)
        {
            ll dimakan = sisa/10;
            banyakPetya+=dimakan;
            sisa-=dimakan;
        }
    }

    if (banyakVasya>=banyakPetya)
    {
        return true;
    } else {
        return false;
    }
}

int main(){
    cin>>n;
    ll low = 1;
    ll high = (1000000000000000000);
    // cout<<high<<endl;
    while(low<high){
        ll mid = (low+high)/2;
        // cout<<mid<<endl;
        if (cek(mid))   
        {
            high = mid;
        } else {
            low = mid+1;
        }
    }

    cout<<low<<endl;

    return 0;
}