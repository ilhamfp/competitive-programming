// # ====================================
// # (c) IlhamFirdausiPutra aka delunar31
// # ====================================
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

	int n;
	scanf("%d", &n);
	int x[100005], y[100005], r[100005];
	for (int i = 1; i <= n; ++i)
	{
		scanf("%d %d %d", &x[i], &y[i], &r[i]);
	}

	for (int i = 1; i <= n; ++i)
	{
		for (int j = i+1; j<=n; ++j)
		{
			double jarak = sqrt( ( abs(x[i]-x[j]) )*( abs(x[i]-x[j]) ) + ( abs(y[i]-y[j]) )*( abs(y[i]-y[j]) ) );
			if (jarak <= (r[i]+r[j]) )
			{
				printf("%d %d\n",i, j );
			}
		}
	}

	return 0;
}