#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;
typedef unsigned long long ull;

int main(){
    int n,h,a,b,k;
    cin>>n>>h>>a>>b>>k;
    for (int i = 0; i < k; ++i)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        if (x1 == x2)
        {
            cout<<abs(y1-y2)<<endl;
        } else {
            int nyebrang;
            if (a<=y1 && y1<=b)
            {
                nyebrang = y1;
            } else if(a>y1){
                nyebrang = a;
            } else {
                nyebrang = b;
            }
            ll jaw = abs(nyebrang-y1)+abs(x1-x2)+abs(nyebrang-y2);
            cout<<jaw<<endl;
        }
        
    }
    return 0;
}
