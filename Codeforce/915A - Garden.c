#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define nl printf("\n");
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 

int n, k;
vector<int> v;

int search(vector<int> v1, int panjang){

}

int main() {

  cin>>n>>k;

  for (int i = 0; i < n; ++i)
  {
    int x;
    cin>>x;
    v.pb(x);
  }
  sort(v.begin(), v.end());
  // printf("%d\n",v.size() );
  for (int i = v.size()-1; i >=0; --i)
  {
    // printf("%d\n", i);
    if (k%v[i] == 0)
    {
      printf("%d\n", k/v[i] );
      return 0;
    }
  }
  
  return 0;
}