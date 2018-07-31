#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;

int main(){
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    if (a<=(n-1) && b<=(n-1) && c<=(n-1) && c<=a && c<=b)
    {
        int ans = n-abs(a+b-c);
        if (ans>=1)
        {
            cout<<ans<<endl;
        } else {
            printf("-1\n");
        }
    } else {
        printf("-1\n");
    }
    return 0;
}