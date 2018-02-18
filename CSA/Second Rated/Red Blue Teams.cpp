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
	int n,r,k;
	cin >> n >> r >> k;
	queue<int> red1;
	queue<int> blue1;
	queue<int> red2;
	queue<int> blue2;
	for (int i = 0; i < r; ++i)
	{
		red1.push(1);
		red2.push(1);
	}
	for (int i = 0; i < (n-r); ++i)
	{
		blue1.push(1);
		blue2.push(1);
	}

	//min
	for (int i = 0; i < k; ++i)
	{
		if(red1.size() != 0){
			if(red1.front() != 0){
				red1.pop();
				blue1.push(0);
				continue;
			}
		}

		red1.push(0);
		blue1.pop();
		
	}
	int min = red1.size();
	//max
	for (int i = 0; i < k; ++i)
	{
		if(blue2.size() != 0){
			if(blue2.front() != 0){
				blue2.pop();
				red2.push(0);
				continue;
			}
		}

		blue2.push(0);
		red2.pop();
	}

	int max =	red2.size();
	printf("%d %d\n", min, max );
    return 0;
}