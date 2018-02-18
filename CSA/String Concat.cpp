#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define p push
#define ll long long
#define fi first
#define se second   
#define pii pair< int , int >
#define pll pair< long , long >
#define pi acos(-1.0)
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define MOD 10e9+7
#define line puts("")


using namespace std;

ll n, k;
map<int, int> m;

int main(){
    cin>>n;
    vector<string> v;
    for (int i = 0; i < n; ++i)
    {
    	string x;
    	cin>>x;
    	v.pb(x);
    }
    for (int i = 0; i < n; ++i)
    {
    	string test = v[i];
    	for (int j = 0; j < n; ++j)
    	{
    		if (i!=j)
    		{
    			for (int k = 0; k < n; ++k)
    			{
    				if (i!=k)
    				{
    					string temp = v[j]+v[k];
    					if (test == temp)
    					{
    						m[i+1]++;
    					}
    				}
    			}
    		}
    	}
    }
    for (auto p : m)
    {
    	if (p.second != 0)
    	{
    		printf("%d ", p.first);
    	}
    }
    cout<<endl;
}