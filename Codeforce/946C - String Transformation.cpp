#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define fi first
#define se second   
#define pii pair< int , int >
#define pll pair< long , long >
#define pi acos(-1.0)
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define MOD 10e9+7
#define line puts("")
#define INF_INT -2147483647

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 
using namespace std;

string s;
int main() {
  cin>>s;
  bool bisa = false;
  bool ketemu = false;
  string jawaban = "";
  int hitung = 97;
  for (int i = 0; i < s.size() ; ++i)
  {
    if (!bisa)
    {
      if (s[i]<=hitung)
      {
        ketemu = true;
        jawaban+= (char) hitung;
        hitung++;
      } else if ((s[i]>hitung)&&(ketemu)){
        jawaban+= s[i];
      }

      if (!ketemu)
      {
        jawaban+= s[i];
      }

      if (hitung == 123)
      {
        bisa = true;
      }

    } else {
      jawaban+= s[i];
    }
    
  }
  if (bisa)
  {
    cout<<jawaban<<endl;
  } else {
    printf("-1\n");
  }

  return 0;
}