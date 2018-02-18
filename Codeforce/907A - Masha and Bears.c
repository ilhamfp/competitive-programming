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
  int v1,v2,v3,vm;
  scanf("%d %d %d %d", &v1, &v2, &v3, &vm);


  for (int i = 205; i >= 3; --i)
  {

    for (int j = i-1; j >= 2; --j)
    {

      for (int k = j-1; k >= 1; --k)
      {
        
        if ( ( (v1<=i) && (2*v1>=i) ) && ( (v2<=j) && (2*v2>=j) ) && ( (v3<=k) && (2*v3>=k) ) && ( (vm<=i) && (vm<=j) && (vm<=k) && (2*vm>=k) && !(2*vm>=j) && !(2*vm>=i) ) )
        {
          printf("%d\n", i);
          printf("%d\n", j);
          printf("%d\n", k);
          return 0;
        }


      }
    }
  }

  printf("-1\n");

  return 0;
}

