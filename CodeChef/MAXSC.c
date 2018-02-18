
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define nl printf("\n");

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 

int main() {

  int t;
  cin >> t;
  for (int i = 0; i < t; ++i)
  {
    int n;
    cin >> n;
    vector<int> v[1000];
    for (int j = 0; j < n; ++j)
    {
      for (int k = 0; k < n; ++k)
      {
        int x;
        cin>>x;
        v[j].pb(x);
      }
      sort(v[j].begin(), v[j].end());
    }
    ll tempMax = (ll) v[n-1][n-1];
    ll hasil = tempMax;
    bool lanjut=true;
    for (int j = n-2; j >=0 && lanjut; --j)
    {
      ll pilihan;
      for (int k = n-1; k >= 0 && lanjut; --k)
      {

        if (v[j][k]<tempMax)
        {
          pilihan=v[j][k];
          tempMax=pilihan;
          // printf("Pilihannya=%d\n", pilihan );
          break;
        } else if (k==0){
          printf("-1\n");
          lanjut = false;
        }

      }
      hasil+=pilihan;
      // printf("Hasilnya=%d\n", hasil);
    }

    if (lanjut)
    {
      cout<<hasil<<endl;
    }
  }
  
  return 0;
}