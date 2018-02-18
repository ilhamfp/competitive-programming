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
	int n, m;
	scanf("%d %d", &n, &m);
	int matriks[100005];
	for (int i = 1; i <= n; ++i)
	{
		int x;
		scanf("%d",&x);
		matriks[i]=x;
	}

	for (int i = 2; i <= n; ++i)
	{
		matriks[i]+=matriks[i-1];
	}

	for (int i = 0; i < m; ++i)
	{
		int a,b;
		scanf("%d %d", &a, &b);

		ll sum1= matriks[b];
		ll sum2= (a-1)<1?0:matriks[a-1];
	

		if ( (sum1-sum2)%2==0 )
		{
			printf("Sim\n");
		}
		else
		{
			printf("Nao\n");
		}
	}

	return 0;
}