
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define nl printf("\n");
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 

string a,b;

bool cmp( char a, char b){
  return a>b;
}

int main() {
  _FAST
  cin>>a>>b;
  sort(a.begin(), a.end(), cmp);
  // cout<<a<<endl;

  if (b.size() > a.size())
  {
    cout<<a<<endl;
  } else {
    bool belum=true;
    int diperbaiki = 1;
    for (int i = 0; i < a.size() && belum; ++i)
    {
      // cout<<a<<endl;
      if (a[i]>b[i])
      {
        bool ketemu=false;
        for (int j = i+1; j <  a.size() && !ketemu; ++j)
        {
          if (a[j]<=b[i])
          {
            char temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            if (a[i]!=b[i])
            {
              belum=false;
            }
            ketemu=true;
          }
        }

        if (!ketemu)
        {
          i=i-diperbaiki;
          diperbaiki++;
          sort(a.begin()+i+1, a.end(), cmp);
          for (int j = i+1; j <  a.size(); ++j)
          {
            if (a[j]<a[i])
            {
              char temp=a[i];
              a[i]=a[j];
              a[j]=temp;
              belum=false;
              break;
            }
          }
          
        }

      } else if (a[i]<b[i]){

        belum=false;

      } else {

      }
      sort(a.begin()+i+1, a.end(), cmp);
    }
    cout<<a<<endl;
  }
  
  return 0;
}