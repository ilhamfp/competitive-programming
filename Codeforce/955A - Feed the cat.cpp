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

double jam,menit,h,d,c,n, ans;

int main() {
    cin>>jam>>menit;
    cin>>h>>d>>c>>n;
    
    int timeKeMenit = jam*60 + menit;
    int waktuKeDiskon;
    if (timeKeMenit<1200)
    {
        waktuKeDiskon = 1200- timeKeMenit;
    }
    if ( (timeKeMenit >= 1200) && (timeKeMenit <= 1439 ))
    {
        ans = ceil(  h/ n)*(c*0.8);
    } else {
        ans = ceil(  h/ n)*(c);
        double ans2 = ceil( (h+(waktuKeDiskon*d)) / n)*(c*0.8);

        ans = min(ans, ans2 );

    }

    printf("%.5f\n", ans);
    return 0;
}