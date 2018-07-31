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
int b1, b2;
vector<int> paintingType;
map<int, int> m;

int main() {
  cin>>b1;
  for (int i = 0; i < b1; ++i)
  {
    int x;
    cin>>x;
    paintingType.pb(x);
  }
  cin>>b2;
  for (int i = 0; i < b2; ++i)
  {
    m.clear();
    int x,y,ans=0;
    cin>>x>>y;
    x--;
    y--;
    for (int j = x; j <= y; ++j)
    {
      m[paintingType[j]]++;
      // printf("MASUK %d\n", );
    }
    for (auto p : m)
    {
      if (p.second == 1)
      {
        ans++;
      }
    }
    printf("%d\n", ans);
  }
	return 0;
}