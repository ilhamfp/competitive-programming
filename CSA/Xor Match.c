#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define nl printf("\n");

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 


int n,m;
string a,b;

int main() {

  cin>>n>>m;
  for (int i = 0; i < n; ++i)
  {
    string x;
    cin>>x;
    a+=x;
  }

  for (int i = 0; i < m; ++i)
  {
    string x;
    cin>>x;
    b+=x;
  }

  // cout<<a<<endl;
  // cout<<b<<endl;

  int banyak=0;
  for (int i = 0; i < m-n+1; ++i)
  {
    string temp="";
    for (int j = i; j < i+n; ++j)
    {
      if (b[j]=='1')
      {
        temp+="0";
      } else {
        temp+="1";
      }
    }
    // cout<<temp<<endl;

    if(temp==a)banyak++;
  }

  printf("%d\n", banyak);

  return 0;
}