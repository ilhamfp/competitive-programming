#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;
typedef unsigned long long ull;

int main(){
    int n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    int pos = -1;
    if (s.size() > (t.size()+1))
    {
        cout<<"NO"<<endl;
        return 0;
    } else {
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i]=='*')
            {
                pos = i;
                break;
            } else {
                if (s[i] != t[i])
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
        if (pos == -1)
        {
            if (n==m)
            {
                cout<<"YES"<<endl;
                return 0;
            } else {
                cout<<"NO"<<endl;
                return 0;
            }
        } else {
            for (int i = 0; i < (n-pos-1); ++i)
            {
                if (s[n-i-1] != t[m-i-1])
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
        cout<<"YES"<<endl;
    }
    return 0;
}