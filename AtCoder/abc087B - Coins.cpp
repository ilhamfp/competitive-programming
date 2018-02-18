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

int x, a, b, c;

int main() {
  cin>>a>>b>>c>>x;

  int banyakCara = 0;

  for (int i = 0; i <= a; ++i)
  {
  	
  	for (int j = 0; j <= b; ++j)
  	{
  		
  		for (int k = 0; k <= c; ++k)
  		{
  			if ( (500*i + 100*j + 50*k) == x) 
  			{
  				banyakCara++;
  			}
  		}

  	}

  }

  cout<< banyakCara << endl;


  return 0;
}


