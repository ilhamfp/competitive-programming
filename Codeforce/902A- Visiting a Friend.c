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

int tab[1000];
int main()
{
  int n, m, pastA, a, b, pastB;
  scanf("%d %d", &n, &m);
  memset(tab, 0, sizeof tab);

  // for (int i = 0; i < 20; ++i)
  // {
  // 	cout << tab[i];nl
  // }

  for (int i = 0; i < n; ++i)
  {
  	scanf("%d %d", &a, &b);
  	if (tab[a]==0 && i!=0)
  	{
  		printf("NO\n");
  		return 0;
  	}else {
  		for (int j = a; j <= b; ++j)
  		{
  			tab[j]++;
  		}
  	}
  }
  
  for (int i = 0; i <= m; ++i)
  {
  	if (tab[i]==0)
  	{
  		printf("NO\n");
  		return 0;
  	}
  }

  printf("YES\n");

  return 0;
}