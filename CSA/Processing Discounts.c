
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

int n, x;

bool cmp( pair <int,int> a, pair <int,int> b ){
  return (a.first<b.first);
}

int main() {
  cin>> n >> x;
  vector< pair <int,int> > v;
  for (int i = 0; i < n; ++i)
  {
    int a, b;
    cin>>a>>b;
    v.pb(mp(a,b));
  }

  sort(v.begin(), v.end(), cmp);
  int jawaban= INF, bayarAsli = x, bayaran = x;
  for (int i = 0; i < v.size(); ++i)
  {
    if (v[i].first <= bayarAsli)
    {
      bayaran-= v[i].second;

    } else {
      int beda = abs( v[i].first - bayarAsli );
      bayarAsli+= beda;
      bayaran+=beda;
      bayaran-= v[i].second;
      

    }

    jawaban = min(bayaran,jawaban);

  }
  if (jawaban<0)
  {
    jawaban = 0;
  }
  jawaban = min(jawaban, x);
  printf("%d\n", jawaban);
  return 0; 
}