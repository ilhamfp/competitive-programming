#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;
typedef unsigned long long ull;

int main(){
    // string test = "wbwbbwbwb";
    // reverse(test.begin(), test.begin()+4);
    // reverse(test.begin()+4, test.end());
    // cout<<test<<endl;
    string s;
    cin>>s;
    ll panjang = s.size();
    s+=s;
    char flag = 'a';
    ll hitung =0;
    ll ans = -1;
    for (ll i = 0; i < s.size(); ++i)
    {
        if (s[i]==flag)
        {
            hitung = 1;
        } else {
            hitung++;
        }
        flag = s[i];
        ans = max(ans,hitung);
    }
    cout<<min(ans,panjang)<<endl;
    return 0;
}