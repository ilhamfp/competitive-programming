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

bool find(pair<int,int> v, vector<int> vL, vector<int> vR){
	bool ketemu = false;

	if(vL.size() == 0){
		return false;
	} else {
		for (int i = 0; (i < vL.size()) && (ketemu == false); ++i)
		{
			if ((vL[i] < v.first) && (vR[i]> v.second))
			{
				ketemu = true;
			}
		}
	}
	return ketemu;

}

// bool findR(int r, vector<int> vR){
// 	bool ketemu = false;
// 	if(vR.size() == 0){
// 		return false;
// 	} else {
// 		for (int i = 0; (i < vR.size()) && (ketemu == false); ++i)
// 		{
// 			if (vR[i] > r)
// 			{
// 				ketemu = true;
// 			}
// 		}
// 	}
// 	return ketemu;
	
// }

int main(){
	std::vector<pair<int,int>> v;
	pair<int,int> p;
	std::vector<int> vL, vR;
	int N;
	cin >> N;
	int banyak = 0;
	for (int i = 0; i < N; ++i)
	{
		int l, r;
		cin >> l >> r;
		p = make_pair(l,r);
		v.push_back(p);
		vL.push_back(l);
		vR.push_back(r);
	}

	for (int i = 0; i < N; ++i)
	{
		if ( (find(v[i], vL, vR) ))
		{
			banyak++;
		}
	}

	
	cout << banyak << endl;
    return 0;
}