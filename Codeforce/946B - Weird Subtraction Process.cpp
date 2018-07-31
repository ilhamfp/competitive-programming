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
#define INF_INT -2147483647

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 
using namespace std;

ll a,b;
int main() {
  cin>>a>>b;

  while(1){
    bool masuk = false;
    if (a == 0 | b == 0)
    {
      break;
    }

    if (a >= 2*b)
    {
      masuk = true;
      ll t = a/ (2*b);
      a = a- t*(2*b);
    }

    if ((b >= 2*a) && (!masuk))
    {
      masuk = true;
      ll t = b/ (2*a);
      b = b - t*(2*a);
    }

    if (masuk == false)
    {
      break;
    }
  }

  cout<<a<<" "<<b<<endl;
  return 0;
}