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
  set<char> myset;
  string s;
  cin >> s;
  int banyak =0;
  for (int i = 0; i < s.size(); ++i)
  {
    if ( (s[i]=='a' || s[i]=='i' || s[i]=='u' ||s[i]=='e' ||s[i]=='o' || s[i]=='1' ||s[i]=='3' ||s[i]=='5' ||s[i]=='7' ||s[i]=='9' )  )
    {
      banyak++;

    }
  }
  printf("%d\n", banyak);
  return 0;
}