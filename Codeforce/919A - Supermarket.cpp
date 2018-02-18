#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define mp make_pair
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = 1e9;
const double EPS = 1e-9;
const double PI = acos(-1);
#define nl printf("\n");
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 

int n,m;

int main() {
  cin>>n>>m;
  vector<double> v;
  for (int i = 0; i < n; ++i)
  {
  	double a,b;
  	cin>>a>>b;
  	v.pb( a / b);
  }

  sort(v.begin(), v.end());


  printf("%.10f\n", v[0]*m );
  
  return 0;
}


