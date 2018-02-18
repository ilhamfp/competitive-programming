// # ======================================= #
// # Ilham Firdausi Putra, 19 Desember 2017  #
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
  int n, s, x;
  scanf("%d %d %d", &n, &s, &x);
  
  for (int i = n; i <= x; i=i+s)
  {
    if (x==i)
    {
      printf("YES\n");
      return 0;
    } else if (x==(i+1)){
      if (i!=n)
      {
        printf("YES\n");
        return 0;
      }
      
    }
  }
  printf("NO\n");
  return 0;
}