// # ======================================= #
// # Ilham Firdausi Putra, 18 Desember 2017  #
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
  int n, pastX, x, panjang, panjangMax=0;
  scanf("%d", &n);
  scanf("%d", &x);
  pastX = x;
  panjang =1;
  for (int i = 0; i < n-1; ++i)
  {
    scanf("%d", &x);
    
    if (x>=pastX)
    {
      panjang++;
      pastX = x;
    } else {
      panjangMax = max(panjangMax,panjang);
      panjang=1;
      pastX = x;
    }
  }
  panjangMax = max(panjangMax,panjang);
  printf("%d\n", panjangMax);
  return 0;
}