#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, ans = 0;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    for (int i = 0; i <= ceil((double)n/2) -1; ++i)
    {
        map<char,int> mymap;
        mymap[s1[i]]++;
        mymap[s1[n-i-1]]++;
        mymap[s2[i]]++;
        mymap[s2[n-i-1]]++;
        int maks = 0;
        for (auto p : mymap)
        {
            maks = max(maks, p.second);
        }

        if (mymap.size() == 4)
        {
            ans+=2;
        } else if (mymap.size() == 3){
            ans+= 1 + (s1[i] == s1[n-i-1]);
        } else if (mymap.size() == 2 && (maks==3 || i==n-i-1)){
            ans+= 1 ;
        }
    }
    cout<<ans<<endl;
    return 0;
}
