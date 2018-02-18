
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define nl printf("\n");

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 

ll res, n;
map<int, vector<int>> m;

int main() {
  scanf("%lld", &n);
  
  for (int i = 2; i <= n; ++i)
  {
    int x;
    scanf("%d",&x);
    m[x].pb(i);
  }

  for (auto p : m)
  {

    if (!p.second.empty())
    {
      // printf("masuk\n");
      int banyakLeaf=0;

      for (int i = 0; i < p.second.size(); ++i)
      {
        int anakNya = p.second[i];

        if (m[anakNya].empty())
        {
          banyakLeaf++;
        }
      }

      if (banyakLeaf <  3){
        printf("No\n");
        return 0;
      }
    }
    
  }

  printf("Yes\n");
  
  return 0;
}