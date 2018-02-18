// # ======================================= #
// # Ilham Firdausi Putra, 23 Desember 2017  #
// # ======================================= #
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define nl printf("\n");

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 


int main()
{
  ll X,Y, banyak=0;
  cin >> X >> Y;
  ll penambahX = X;
  for (ll i = X; i <= Y; i+=penambahX)
  {
    banyak++;
    if (i!=X)
    {
      penambahX*=2;
    }
  }

  printf("%lld\n", banyak);
  return 0;
}
