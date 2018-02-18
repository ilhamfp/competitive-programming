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
	std::vector<int> x,y,s;
	int t,c,n;
	cin >> t >> c >> n;
	for (int i = 0; i < n; ++i)
	{
		int xm,ym,sm;
		cin >> xm >> ym >> sm;
		x.push_back(xm);
		y.push_back(ym);
		s.push_back(sm);
	}
	std::vector<int> vC;



	for (int i = 0; i < t; ++i)
	{
		

		int kena = 0;

		for (int ii = 0; ii < n; ++ii)
		{
				float ans1 = (float)x[ii] / (float)c;
				float ans2 = (float)y[ii] / (float)s[ii];
				//cout << "t " << i << " ii " << ii << " "<< ans1 << " " << ans2 << endl;
				if (ans1 == ans2)
				{
					kena++;
				}

			
		}


		cout << kena << endl;

		for (int ii = 0; ii < n; ++ii)
		{
			y[ii]= y[ii]-(s[ii]);
		}

	}
	
    return 0;
}