// # ======================================= #
// # Ilham Firdausi Putra, 19 Desember 2017  #
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
  int n, k, jarak, Letak1, Letak2;
  cin >> n >> k;
  bool bisa=true, noobstacle=true;
  string s;
  cin >> s;

  for (int i = 0; i < s.size(); ++i)
  {
  	if (s[i]=='G' || s[i]=='T')
  	{
  		Letak1 = i;
  		for (int j = i+1; j < s.size(); ++j)
  		{
  			if (s[j]=='G' || s[j]=='T')
  			{
  				Letak2=j;
  				jarak=j-i;
  				break;
  			}
  		}
  		break;
  	}
  }
  // cout<<Letak1;nl
  // cout<<Letak2;nl
  // cout<<jarak;nl
  for (int i = Letak1; i <= Letak2; i=i+k)
  {
  	if (s[i]=='#')
  	{
  		// cout<<s[i];nl
  		noobstacle=false;
  		break;
  	}
  }

  if ( (jarak%k==0) && noobstacle)
  {
  	printf("YES\n");
  }else{
  	printf("NO\n");
  }

  return 0;
}