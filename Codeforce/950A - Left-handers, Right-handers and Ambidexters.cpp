#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define fi first
#define se second   
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


int main() {
    int l,r,a;
    cin>>l>>r>>a;
    while(a--){
        if (l<r)
        {
            l++;
        }else {
            r++;
        }
    }
    cout<<min(l,r)*2<<endl;
    return 0;
}