
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

int a[10101000];
vector<int> v;
map<int, int> m;
int n, t;

int main() {
  _FAST
  cin>> n >> t;
  for (int i = 0; i < n; ++i)
  {
    int x;
    cin>>x;
    m[x]++;
  }

  for (auto p : m)
  {
    int awalQuack = p.first;
    int hitung = awalQuack;
    int count = 1;
    while(hitung<=t){
      // a
      a[hitung]+= p.second;
      count++;
      hitung = awalQuack*count;
    }
  }

  int jawabanMax = a[1], jawabanBanyak = 1;
  for (int i = 2; i <=t; ++i)
  {
    if (a[i] == jawabanMax)
    {
      jawabanBanyak++;
    } else {

      if (jawabanMax < a[i])
      {
        jawabanMax = a[i];
        jawabanBanyak = 1;
      }

    }

  }

  printf("%d %d\n", jawabanMax, jawabanBanyak );
  return 0; 
}