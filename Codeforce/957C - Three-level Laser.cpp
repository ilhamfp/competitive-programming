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

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };

int n,u;
std::vector<int> v;

int main() {
    cin>>n>>u;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin>>x;
        v.pb(x);
    }
    double jaw = -1;
    for (int i = 1; i < n-1; ++i)
    {
        double temp = -2;
        int k = upper_bound(v.begin(), v.end(),  v[i-1]+u) - v.begin();
        k--;
        if (k>i)temp = (double)(v[k]-v[i])/(v[k]-v[i-1]);
        jaw = max(jaw,temp);
    }

    if (jaw == -1)
    {
        printf("-1\n");
    } else {
        printf("%.10f\n",jaw );
    }


    return 0;
}