#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;
typedef unsigned long long ull;

int main(){
    ll n,q;
    cin>>n>>q;
    for (ll i = 0; i < q; ++i)
    {
        ll x,y;
        cin>>x>>y;
        ll hitung = (x-1)*n +y;
        ll jaw = ((double)(hitung+1)/2.0);
        if ((x+y)%2 == 1)
        {
            jaw+= ((double)(n*n+1)/2.0);
        }
        cout<<jaw<<endl;
    }
    
    return 0;
}