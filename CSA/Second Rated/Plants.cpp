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


int main(){
	std::vector<int> v,a,b;

	int n,m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; ++i)
	{
		int t;
		cin >> t;
		v.push_back(t);
	}

	for (int i = 0; i < n; ++i)
	{
		int mskA, mskB;
		cin >> mskA >> mskB;
		a.push_back(mskA);
		b.push_back(mskB);
	}

	for (int i = 0; i < n; ++i)
	{
		int banyak = 0;
		for (int ii = 0; ii < m; ++ii)
		{
			if ((v[ii] >= a[i] ) && ( v[ii] <= b[i])){
				banyak++;
			}
		}

		cout << banyak << endl;
	}


    return 0;
}