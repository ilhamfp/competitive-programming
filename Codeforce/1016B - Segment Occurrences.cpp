#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;

int main(){
    int n,m,q;
    cin>>n>>m>>q;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    vector<int> v;
    int found = s1.find(s2);
    while(found != std::string::npos){
        v.pb(found+1);
        found = s1.find(s2,found+1);
    }
    // for (int i = 0; i < v.size(); ++i)
    // {
    //     cout<<v[i]<<endl;
    // }
    for (int i = 0; i < q; ++i)
    {
        int x,y, ans = 0;
        cin>>x>>y;
        int low = lower_bound(v.begin(), v.end(),x)-v.begin();
        int high = upper_bound(v.begin(), v.end(),y)-v.begin();

        for (int i = low; i < high; ++i)
        {
            if (v[i]+s2.size()-1 <= y)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
