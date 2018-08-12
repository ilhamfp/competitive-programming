#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;
typedef unsigned long long ull;

int count1[1000001];

int main(){
    ll t;
    cin>>t;
    while(t--){
        int n,m, ans = 1, maks=0;
        memset(count1,0,sizeof(count1));
        cin>>n>>m;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin>>x;
            count1[x]++;
            maks = max(maks,x);
        }
        for (int i = maks; i > 1; i--)
        {
            int temp = 0;
            for (int j = i; j <= maks; j+=i)
            {
                temp+=count1[j];
                if (temp>=m)
                {
                    ans = i;
                    break;
                }
            }
            if (ans!=1)
            {
                break;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}
