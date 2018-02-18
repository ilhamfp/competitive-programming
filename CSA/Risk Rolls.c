
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

ll dibagiDengan = 1000000007;
int n, m;

bool cmp(int a, int b){
  return a>=b;
}

int main() {
	cin>>n>>m;
  vector<int> alena , boris ;
  for (int i = 0; i < n; ++i)
  {
    int x;
    cin>>x;
    alena.pb(x);
  }

  for (int i = 0; i < m; ++i)
  {
    int x;
    cin>>x;
    boris.pb(x);
  }

  int winAlena = 0, winBoris = 0;
  sort(boris.begin(), boris.end(), cmp);
  sort(alena.begin(), alena.end(), cmp);
  if (n>m)
  {
    for (int i = 0; i < boris.size(); ++i)
    {
      if (alena[i]>boris[i])
      {
        winAlena++;
      } else {
        winBoris++;
      }
    }
  } else {
    for (int i = 0; i < alena.size(); ++i)
    {
      if (alena[i]>boris[i])
      {
        winAlena++;
      } else {
        winBoris++;
      }
    }
  }

  printf("%d %d\n",winAlena, winBoris );
  return 0; 
}