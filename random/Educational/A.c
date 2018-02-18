#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define nl printf("\n");

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 

ll n, a[100009], jarak=1000000909,x;
vector<ll> v, indeksMin;

int main() {
  
  scanf("%lld", &n);
  
  for (ll i = 0; i < n; ++i)
  {
    scanf("%lld", &x);
    v.pb(x);
    
  }
  ll nilaiMin = *min_element(v.begin(), v.end());

  for (ll i = 0; i < v.size(); ++i)
  {
    if (v[i]==nilaiMin)
    {
      indeksMin.pb(i);
    }
  }

  for (ll i = 0; i < indeksMin.size()-1; ++i)
  {
    if (jarak>(indeksMin[i+1]-indeksMin[i]))
    {
      jarak= (indeksMin[i+1]-indeksMin[i]);
    }
    
    
  }

  printf("%d\n", jarak);



  return 0;
}
