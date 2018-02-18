
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define nl printf("\n");

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 

int main() {

  int t;

  
  cin >> t;
  for (int i = 0; i < t; ++i)
  {
    vector<int> v;
    for (int i = 0; i < 4; ++i)
    {
      int x;
      cin>> x;
      v.pb(x);
    }
    sort(v.begin(), v.end());
    
    if ( (v[0]*v[2]) == (v[1]*v[3]) ){
      printf("YES\n");
    } else {
      printf("NO\n");
    }

  }
  
  return 0;
}