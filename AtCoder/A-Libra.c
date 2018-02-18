// # ======================================= #
// # Ilham Firdausi Putra, 23 Desember 2017  #
// # ======================================= #
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define nl printf("\n");

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 


int main()
{
  int A,B,C,D;
  cin >> A >> B >> C >> D;

  if (A+B > C+D)
  {
    printf("Left\n");
  } else if (A+B < C+D){
    printf("Right\n");
  } else {
    printf("Balanced\n");
  }
  return 0;
}
