#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define mp make_pair
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = 1e9;
const double EPS = 1e-9;
const double PI = acos(-1);
#define nl printf("\n");
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 

int k;

int main() {
  cin>>k;

  int count = 0;
  int hitungan = 1;
  while(true){
  	int nilai = 0;
  	int i = hitungan;
  	while( i != 0 ){
  		nilai+= i%10;
  		i = i/10;
  	}

  	if (nilai == 10)
  	{
  		count++;
  	}

  	if (count == k)
  	{
  		cout<<hitungan<<endl;
  		return 0;
  	}
  	hitungan++;

  }
  
  return 0;
}


