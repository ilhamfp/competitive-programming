#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define nl printf("\n");

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 


int s,q,k,p;
vector<int> v;

int main() {
  cin>>s>>q>>k;
  for (int i = 0; i < q; ++i)
  {
    int x;
    cin>>x;
    v.pb(x);
  }

  sort(v.begin(), v.end());
  double hasil = (double) s;
  for (int i = 0; i < v.size(); ++i)
  {
    double temp1= hasil, temp2= hasil;
    temp1+= (double) k;
    temp2+= ( (double) v[i]/ (double) 100 ) * hasil;
    hasil = temp1>=temp2? temp1 : temp2;
  }

  printf("%0.15f\n", hasil);



  return 0;
}