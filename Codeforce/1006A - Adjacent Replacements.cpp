#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;

int main(){
    int n;
    cin>>n;
    vector<int> v;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin>>x;
        v.pb(x);
    }

    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i]%2==0)
        {
            v[i]--;
        }
    }
    for (int i = 0; i < v.size(); ++i)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
