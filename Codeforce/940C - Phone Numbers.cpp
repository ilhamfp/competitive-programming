#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define p push
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

int n,k;
int tab[200];
int main() {
  cin>>n>>k;
  string s, t ="";
  cin>>s;
  if (n<k)
  {
    int b = k-n;
    t+=s;
    int m = s[0];
    for (int i = 1 ; i < s.size(); ++i)
    {
      m = min(m, (int) s[i] );
    }
    string temp(1, (char) m );
    for (int i = 0; i < b; ++i)
    {
      t+= temp;
    }
  } else {
    for (int i = 0; i < s.size(); ++i)
    {
      tab[ (int) s[i] ] = 1;
    }
    string temp(s,0,k);
    t+= temp;

    int m = s[0];
    for (int i = 1 ; i < s.size(); ++i)
    {
      m = min(m, (int) s[i] );
    }

    for (int i = t.size()-1; i >= 0 ; --i)
    {
      bool ketemu = false;

      for (int j = (int) t[i] + 1 ; j <= 122 && (!ketemu); ++j)
      {
        if (tab[j] == 1)
        {
          ketemu = true;
          t[i] = (char) j;
        }
      }

      if (ketemu)
      {
        break;
      } else {
        t[i] = (char) m;
      }
    }


  }

  cout<<t<<endl;
  return 0;
}