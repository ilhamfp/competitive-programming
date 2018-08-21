#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;
typedef unsigned long long ull;
map<char,int> ans;
string s;
ll t;

int main(){
    cin>>t;
    cin>>s;
    for (int i = 0; i < s.size(); ++i)
    {
        ans[s[i]]++;
    }
    bool bisa = false;
    int hitung = 0;
    for (auto p : ans)
    {
        hitung++;
        if (p.second>=2)
        {
            bisa = true;
        }
    }
    if (bisa || (!bisa && hitung==1))
    {
        cout<<"Yes"<<endl;
    } else {
        cout<<"No"<<endl;
    }
    
    return 0;
}