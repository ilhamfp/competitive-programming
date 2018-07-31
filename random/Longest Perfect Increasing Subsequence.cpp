#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back   
#define pii pair< int , int >
#define pll pair< long , long >
#define pi acos(-1.0)
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define MOD 10e9+7
#define line puts("")

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 
using namespace std;
map<int, int> m;
int main()
{
    int n;
    cin>>n;
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin>>x;
        m[x]=m[x-1]+1;
        ans = max(m[x],ans);
    }
    cout<<ans<<endl;
    
    return 0;
}