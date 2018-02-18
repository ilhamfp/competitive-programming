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
  std::vector<int> v;
  int n,m;
  cin>>n>>m;
  for (int i = 0; i < m; ++i)
  {
    int x;
    cin>>x;
    v.pb(x);
  }
  int b = 1001;
  sort(v.begin(),v.end());
  for (int i = 0; i < (m-n+1); ++i)
  {
    b = min(b,(v[i+n-1]-v[i]));
  }

  printf("%d\n", b);

	return 0;
}