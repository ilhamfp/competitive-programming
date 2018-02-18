#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define nl printf("\n");

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 

int n,a,b;

int main() {
  
  double perbandingan;
  scanf("%d %d %d", &n, &a, &b);
  int plateA, plateB;
  int sum=a+b;
  plateA= round( (double) n *  ( (double) a / (double) sum) );
  if (plateA==0)
  {
    plateA=1;
  }
  plateB= n-plateA;
  if (plateB==0)
  {
    plateB=1;
    plateA--;
  }
  // printf("%d\n", plateA);
  int hasil =min(a/plateA,b/plateB);
  if (hasil==0) hasil=1;
  printf("%d\n", hasil);
  

  return 0;
}
