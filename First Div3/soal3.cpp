#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back   
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin>>x;
        v.pb(x);
    }
    sort(v.begin(), v.end());

    if (n==k){
        cout<<v[k-1]<<endl;
    } else if (k==0){
        if (v[0]==1)
        {
            printf("-1\n");
        } else {
            cout<<v[0]-1<<endl;
        }
    } else if (n>k && (v[k-1]!=v[k]))
    {
        cout<<v[k-1]<<endl;
    } else
    {
        printf("-1\n");
    }
    return 0;
}