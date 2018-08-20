#include <bits/stdc++.h>
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
        int n;
        string s;
        cin>>n;
        cin>>s;
        bool bisa = true;
        // 0 1 2 3
        // 0 1 2 3 4 5
        for (int i = 0; i <= (s.size()/2)-1; ++i)
        {
            if (abs(s[i]-s[n-i-1])!=0 && abs(s[i]-s[n-i-1])!=2)
            {
                cout<<"NO"<<endl;
                bisa = false;
                break;
            }
        }
        if (bisa)
        {
            cout<<"YES"<<endl;
        }
    }
    
    return 0;
}