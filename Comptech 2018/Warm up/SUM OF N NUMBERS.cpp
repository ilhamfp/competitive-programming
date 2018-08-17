#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;
typedef unsigned long long ull;

int main(){
    int n;
    cin>>n;
    ll ans=0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin>>x;
        ans+=x;
    }
    cout<<ans<<endl;
    return 0;
}
