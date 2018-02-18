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
	int n,m,k;
	scanf("%d %d %d", &n, &m, &k);

	int T = ceil( n*0.7 );

	if (T <= k)
	{
		printf("0\n");
	} else {
		if ( (n-m)<(T-k) )
		{
			printf("-1\n");
		} else {
			printf("%d\n", T-k);
		}
	}

	int sisa = ((k+(n-m))*100)/n;
	printf("%d\n", sisa);

	return 0;
}