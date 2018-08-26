#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;
typedef unsigned long long ull;

bool cmp (int i,int j) { return (i>j); }

int main(){
    ll n,k,s;
    cin>>n>>k>>s;
    if(((n-1)*k)<s || k>s){
        cout<<"NO"<<endl;
    } else {
        cout<<"YES"<<endl;
        ll banyakJalan = s/k;
        ll pos = 1;
        while(k){
            ll jalan = min(n-1,s-(k-1));
            pos = (pos-jalan>0)? pos-jalan : pos+jalan;
            cout<<pos<<" ";
            s-=jalan;
            k-=1;
        }
    }

    return 0;
}