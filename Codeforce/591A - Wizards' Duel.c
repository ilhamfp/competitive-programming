// # ======================================= #
// # Ilham Firdausi Putra, 22 Desember 2017  #
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
  double l, p, q;
  cin >> l >> p >> q;
  printf("%.4f", (100 * p) / (p + q) * l / 100);
  return 0;
}