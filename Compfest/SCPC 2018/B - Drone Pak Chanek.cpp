#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;
typedef unsigned long long ull;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        double r;
        double initX = 0, initY = 0;
        cin>>n>>r;
        for (int i = 0; i < n; ++i)
        {
            double d, j;
            cin>>d>>j;
            double s = sin(d*M_PI/180.0);
            double c = cos(d*M_PI/180.0);
            initX+=(j * c);
            initY+=(j * s);
            while(abs(initX)>r){
                if (abs(initX)>r)
                {
                    initX = (initX<0? -1:1)*(abs(initX) - (floor(abs(initX)/(4*r))  * (4*r)));
                    double sub = abs(initX)-r;
                    initX= ((initX<0? -1:1)*r)-((initX<0? -1:1)*sub);
                }
            }
            while(abs(initY)>r){
                if (abs(initY)>r)
                {
                    initY = (initY<0? -1:1)*(abs(initY) - (floor(abs(initY)/(4*r)) * (4*r)));
                    double sub = abs(initY)-r;
                    initY= ((initY<0? -1:1)*r)-((initY<0? -1:1)*sub);
                }
            }
            
        }
        printf("%.11f %.11f\n", initX, initY);
    }
    return 0;
}
