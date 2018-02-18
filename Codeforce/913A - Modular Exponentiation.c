
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define nl printf("\n");

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 

ll res, n,m;

int main() {
  scanf("%lld %lld", &n, &m);
  if (n>63)
  {
    printf("%d\n", m);
    return 0;
  }
  ll hasil = m % (ll) pow(2,n);

  printf("%d\n", hasil );
  
  return 0;
}