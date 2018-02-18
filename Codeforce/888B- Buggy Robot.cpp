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
	int n;
	cin>>n;
	string m;
	cin>>m;
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	for (int i = 0; i < m.size(); ++i)
	{
		if(m[i] == 'U'){
			a++;
		} else  if (m[i] == 'D') {
			b++;
		} else if (m[i] == 'L'){
			c++;
		} else {
			d++;
		}
	}

	int hasil1 = abs(a-b);
	int hasil2 = abs(c-d);
	int hasil3 = m.size() - hasil1 - hasil2;
	cout << hasil3 << endl;
    return 0;
}