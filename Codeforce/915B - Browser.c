
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define nl printf("\n");
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 

int n, pos, l, r;

int main() {
  cin>>n>>pos>>l>>r;

  int panjang = r-l;

  if (l==1 && r==n)
  {
    cout << 0 << endl;
  } else if (l==1){
    cout << (abs(r-pos)+1) << endl;
  } else if (r==n){
    cout << (abs(l-pos)+1) << endl;
  } else {
    cout << (min(abs(r-pos), abs(l-pos)) + panjang + 2) << endl;
  }
  
  return 0;
}