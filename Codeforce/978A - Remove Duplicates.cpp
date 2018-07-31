#include <bits/stdc++.h>
 
using namespace std;
 
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
 
typedef long long ll;
    std::map<int, int> mapHasil;
int main(){
    int n;
    vector<int> v;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin>>x;
        v.pb(x);
    }
    vector<int> ans;
    for (int i = n-1; i >=0; --i)
    {
        if(mapHasil[v[i]] == 0){
            ans.pb(v[i]);
            mapHasil[v[i]]=1;
        }
    }

    cout<<ans.size()<<endl;
    for (int i = ans.size()-1; i >=0; --i)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}