#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };

bool cmp (int i,int j) { return (i>j); }

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int n, L, a;
    cin>>n>>L>>a;
    int ans = 0;
    int lastT = 0, lastL = 0;
    for (int i = 0; i < n; ++i)
    {
        int x,y;
        cin>>x>>y;
        ans+= (x-(lastT+lastL))/a;
        lastT=x;
        lastL=y;
    }
    ans+= (L-(lastT+lastL))/a;
    cout<<ans<<endl;
    return 0;
}