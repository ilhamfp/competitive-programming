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

int main() {
  int n, t =0, x =0, y =0;
  bool bisa = true;
  cin>>n;
  for (int i = 0; i < n; ++i)
  {
  	int tempT, tempX, tempY;
  	cin>> tempT >> tempX >> tempY;
  	if (bisa)
  	{
  		int banyakJalanMungkin = tempT-t;
  		int banyakJalan = abs(x- tempX) + abs(y- tempY);

  		if (banyakJalanMungkin == banyakJalan)
  		{
  			x = tempX;
  			y = tempY;
  			t = tempT;
  		} else if (banyakJalanMungkin > banyakJalan) {
  			int testHitung = banyakJalanMungkin - banyakJalan;
  			if (testHitung%2 == 0)
  			{
  				x = tempX;
  				y = tempY;
  				t = tempT;
  			} else {
  				bisa = false;
  			}
  		} else {
  			bisa = false;
  		}
  	}
  }

  if (bisa)
  {
  	printf("Yes\n");
  } else {
  	printf("No\n");
  }

  return 0;
}


