#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define p push
#define fi first
#define se second   
#define pii pair< int , int >
#define pll pair< long , long >
#define pi acos(-1.0)
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define MOD 10e9+7
#define line puts("")
#define INF_INT -2147483648

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 

using namespace std;

int p,y;
int main() {
  cin>>p>>y;
  int checker = min(p,31623);
  for (int i = y; i > p; --i)
  {
    bool lanjut = true;
    for (int j = 2; j <= checker && lanjut; ++j)
    {
      if (i%j == 0)
      {
        lanjut = false;
      }
    }

    if (lanjut)
    {
      printf("%d\n", i);
      return 0;
    }
  }
  printf("-1\n");
  return 0;
}