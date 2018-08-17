#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;
typedef unsigned long long ull;

int main(){
    ll n,k;
    cin>>n>>k;
    if (k<=n)
    {
        cout<<(k/2)-(k%2 == 0? 1:0)<<endl;
    } else if(k>(n*2)){
        cout<<0<<endl;
    } else {
        ll dif = abs(k-n);
        ll count = abs(n-dif)+1;
        cout<<(count/2)<<endl;
    }
    return 0;
}
