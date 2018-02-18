#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define nl printf("\n");

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 

int k1,k2,k3;

int main() {
  cin >> k1>>k2>>k3;
  if (k1 == 1 || k2 ==1 || k3==1)
  {
    printf("YES\n");
  } else if ( (k1 == 2 && k2 ==2) || (k2 == 2 && k3 ==2) || (k1 == 2 && k3 ==2) ){
    printf("YES\n");
  } else if (k1 == 3 && k2 ==3 && k3==3){
    printf("YES\n");
  } else if ( (k1==2 && k2==4 && k3==4) || (k1==4 && k2==2 && k3==4) || (k1==4 && k2==4 && k3==2) ){
    printf("YES\n");
  } else {
    printf("NO\n");
  }
  return 0;
}
