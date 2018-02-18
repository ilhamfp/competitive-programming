// Nama: Ilham Firdausi Putra
// NIM: 13516140
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define nl printf("\n");
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 

bool cekLucky(int masukan){
  bool jawaban = false;

  if (masukan%10==7)
  {
    jawaban = true;
  } else if ( (masukan>=1020 && masukan<1080 )||(masukan>=420 && masukan<480 ) ){
    jawaban = true;
  }

  return jawaban;
}

int main() {
  int x,y=0, hh,mm;

  cin>>x>>hh>>mm;

  do{
    int nilaiKeMenit= (hh*60)+mm;
    for (int i = 0; i < x; ++i)
    {
      nilaiKeMenit-=y;

      if (nilaiKeMenit<=0)
      {
        int kurangin = abs(nilaiKeMenit);
        nilaiKeMenit = 1440 - kurangin;
      }
    }
    if ( cekLucky(nilaiKeMenit) )
    {
      cout<<y;nl

      return 0;
    }

    y++;
  }while(true);

  return 0; 
}