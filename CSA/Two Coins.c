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
std::vector<int> v;
int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i)
  {
  	int x;
  	scanf("%d", &x);
  	v.pb(x);
  }

  sort(v.begin(), v.end());
  set<int> myset;
  for (int i = 0; i < v.size(); ++i)
  {
  	for (int j = i+1; j < v.size(); ++j)
  	{
  		myset.insert(v[i]+v[j]);
  	}
  }


  printf("%d\n", myset.size() );





  return 0;
}