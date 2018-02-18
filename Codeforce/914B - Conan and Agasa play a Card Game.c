
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define nl printf("\n");
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 

vector<int> v;

int main() {
  int n;
  int terbesar = -1;
  int banyakTerbesar = 0;
  cin>>n;
  for (int i = 0; i < n; ++i)
  {
    int x;
    cin>>x;
    v.pb(x);
    
  }
  v.pb(-1);
  sort(v.begin(), v.end());
  reverse(v.begin(),v.end());
  int banyakSeq=0;
  int seqSebelumnya=0;
  int nilaiSebelumnya = 0;
  for (int i = 0; i < v.size(); ++i)
  {
    if (v[i] == nilaiSebelumnya)
    {
      banyakSeq++;
    } else {
      seqSebelumnya= banyakSeq;
      banyakSeq= 1;
      nilaiSebelumnya=v[i];
    }

    if (seqSebelumnya%2==1)
    {
      printf("Conan\n");
      return 0;
    }
  }
  printf("Agasa\n");

  return 0; 
}