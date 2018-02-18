// # ======================================= #
// # Ilham Firdausi Putra, 20 Desember 2017  #
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
  std::vector<int> v1,v2, v1j,v2j;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i)
  {
    int x;
    scanf("%d", &x);
    v1.pb(x);
  }

  for (int i = 0; i < n; ++i)
  {
    int x;
    scanf("%d", &x);
    v2.pb(x);
  }

  for (int i = 1; i < n; ++i)
  {
    if (v1[i] != v1[i-1])
    {
      v1j.pb(0);
    } else {
      v1j.pb(1);
    }
  }
  v1j.pb(1);

  reverse(v2.begin(),v2.end());
  for (int i = 1; i < n; ++i)
  {
    if (v2[i] != v2[i-1])
    {
      v2j.pb(0);
    } else {
      v2j.pb(1);
    }
  }
  v2j.pb(1);

  reverse(v2j.begin(),v2j.end());

  for (int i = 0; i < n; ++i)
  {
    if (v1j[i] == 0)
    {
      printf("0");
      continue;
    }

    if (v2j[i] == 0)
    {
      printf("0");
      continue;
    }

    printf("1");

  }
  nl
  return 0;
}