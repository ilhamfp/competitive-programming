// # ======================================= #
// # Ilham Firdausi Putra, 19 Desember 2017  #
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
  int n;
  cin>>n;
  for (int i = 1; i <= n; ++i)
  {
    int temp=0, plus=0, minus=0;
    while(temp != (n/2)){
      printf("%d ", i+plus );
      plus+=n;
      temp++;
    }

    while(temp != n){
      printf("%d ", (n*n)-i+1-minus );
      minus+=n;
      temp++;
    }

    nl
    
  }
  return 0;
}