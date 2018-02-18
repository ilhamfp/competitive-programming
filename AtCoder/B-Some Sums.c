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
  int A,B,N,sum=0;
  cin >> N >> A >> B;

  for (int i = 1; i <= N; ++i)
  {
    int x, nilai=0, tempX;
    // scanf("%d", &x);
    tempX = i;
    while(tempX!=0){
      nilai+=(tempX%10);
      tempX/=10;
    }

    if ( (nilai>=A) && (nilai<=B) )
    {
      sum+=i;
    }
  }

  printf("%d\n", sum);

  return 0;
}
