#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define nl printf("\n");

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 

int n,k;  

int main() {
  cin >> n >> k;
  int durasi = 240-k,i=5,banyak=0,count=1;;
  while(i<=durasi && count<=n){
    banyak++;
    count++;
    i+=(5*count);
  }
  printf("%d\n", banyak);
  return 0;
}