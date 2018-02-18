#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265
#define pb push_back
#define mp make_pair
#define nl printf("\n");
#define lp(i, n) for(int i = 0; i < n; i++)
#define rep(i, a, n) for(int i = a; i < n; i++)
#define bft bool found = true
#define bff bool found = false
#define llvmin ll vmin = 1e9
#define llvmax ll vmax = -1e9
#define llans ll ans = 0
#define vi vector<int>      
#define vl vector<long>         
#define vll vector<long long>   
#define pii pair<int, int>          
#define pll pair<long long, long long>  


typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;
 

int main()
{
	int n,m;
	cin >> n >>m;
	string s;
	cin >> s;
	for (int i = 0; i < m; ++i)
	{
		int l,r;
		char c1,c2;
		cin >> l >> r >> c1 >> c2;
		// cout << l << r << c1 << c2 << endl;
		for (int ii = l-1; ii <= r-1; ++ii)
		{
			// cout << s[ii] << endl;
			if (s[ii] == c1)
			{
				s[ii]=c2;
			}
		}
	}

	cout << s << endl;
	
	
	
	
    return 0;
}

