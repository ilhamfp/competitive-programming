#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define nl printf("\n");
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 
using namespace std;

int main() {
  int n;
  int jawaban = -1;

  cin>>n;
  for (int i = 0; i < n; ++i)
  {
    int x;
    cin>>x;
    double hitung = sqrt(x);
    double nilai = hitung - ceil(hitung);

    if (nilai)
    {
      jawaban = max(jawaban,x);
    }

  }

  cout<<jawaban<<endl;
  return 0; 
}