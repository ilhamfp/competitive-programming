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
  int n;
  cin >> n;
  std::vector<int> v;
  v.pb(0);
  for (int i = 0; i < n; ++i)
  {
    int x;
    cin >> x;
    v.pb(x);
  }
  v.pb(0);
  int banyak =0;
  for (int i = 1; i <= n; ++i)
  {
    if (v[i]==0)
    {
      banyak++;

    } else if (v[i]==1)
    {
      if (v[i]==v[i-1])
      {
        v[i]=0;
        banyak++;
      }
    } else if (v[i]==2) 
    {
      if (v[i]==v[i-1])
      {
        v[i]=0;
        banyak++;
      }
    } else 
    {
      if (v[i-1]==1 )
      {
        v[i]=2;
      } else if (v[i-1]==2)
      {
        v[i]=1;
      }
    }
  }

  printf("%d\n", banyak);
  return 0;
}