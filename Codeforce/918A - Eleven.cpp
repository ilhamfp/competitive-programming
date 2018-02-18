#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define mp make_pair
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = 1e9;
const double EPS = 1e-9;
const double PI = acos(-1);
#define nl printf("\n");
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 

ll n;


int main() {
  cin>>n;
  vector<int> v;
  v.pb(1);v.pb(1);
  for (int i = 2; i < n+10; ++i)
  {
    v.pb(v[i-2]+v[i-1]);
  }

  for (int i = 1; i <= n; ++i)
  {
    auto it = find(v.begin(), v.end(),i);
    if (it == v.end())
    {
      printf("o");
    } else {
      printf("O");
    }
  }

  nl

  return 0;
}


