#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;
typedef unsigned long long ull;

string s;
int n,k;

int main(){
    cin>>n>>k;
    cin>>s;
    if (n==k)
    {
        cout<<s<<endl;
    } else {
        int l=0,r=0;
        string ans = "";
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i]=='(')
            {
                if (l < (k/2))
                {
                    ans+='(';
                    l++;
                }
            } else {
                ans+=')';
                r++;
            }
            if (l+r == k)
            {
                break;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}
// ( ( ( ) ( ) ) ) ( ( ) )
// 1 2 3 3 4 4 4 4 5 6 6 6  
// 0 0 0 1 1 2 3 4 4 4 5 6

// ( ) ( ( ) )
// 1 1 2 3 3 3
// 0 1 1 1 2 3