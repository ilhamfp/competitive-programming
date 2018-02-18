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
	std::vector<int> vx;
	std::vector<int> vy;
    int n,besar;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
    	int x,y;
    	scanf("%d %d", &x, &y);
    	vx.push_back(x);
    	vy.push_back(y);
    }
    sort(vx.begin(),vx.end());
    sort(vy.begin(),vy.end());
    besar = (vx[n-1]-vx[0])*(vy[n-1]-vy[0]);
    printf("%d\n", besar);

    return 0;
}