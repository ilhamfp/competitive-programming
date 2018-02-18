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

vector< pair< pair<int,int> , pair<int,int> > > tempatYangDiisi;
int n,m,k;
char tabel[2222][2222];

int main() {
  cin>>n>>m>>k;

  for (int i = 0; i <= m+1; ++i)
  {
    tabel[0][i]='*';
  }

  //Mengambil tabel yang akan diisi dari file soal
  for (int i = 1; i <= n; ++i)
  {

    tabel[i][0]='*';//impassable terrain

    string s;
    cin>>s;
    for (int j = 0; j < m; ++j)
    {
      tabel[i][j+1] = s[j];
    }

    tabel[i][m+1]='*';//impassable terrain
  }

  // isi sisi-sisi tabel dengan impassable terrain
  for (int i = 0; i <= m+1; ++i)
  {
    tabel[n+1][i]='*';
  }


  //CARI
  ll banyakJawaban = 0;
  if (k==1)
  {

  	for (int i = 0; i <= n+1; ++i)
  	{

  	  for (int j = 0; j <= m+1; ++j)
  	  {

  	      if (tabel[i][j]=='.'){
            banyakJawaban++;
          }
  	  }
  	}
  	
  } else {
  	for (int i = 0; i <= n+1; ++i)
  	{
  	  int x1, y1, x2, y2;
  	  bool ketemuKosong = false, ketemuKosongBerurutan = false;
  	  for (int j = 0; j <= m+1; ++j)
  	  {
  	    if (ketemuKosongBerurutan)
  	    {
  	      if (tabel[i][j]=='*')
  	      {
  	        x2 = j-1;
  	        y2 = i;

  	        pair<int,int> p1 = make_pair(x1,y1);
  	        pair<int,int> p2 = make_pair(x2,y2);

  	        tempatYangDiisi.push_back( make_pair(p1,p2) );

  	        ketemuKosong = false;
  	        ketemuKosongBerurutan = false;
  	      }

  	    } else {

  	      if (tabel[i][j]=='.' && !ketemuKosong)
  	      {
  	        x1 = j;
  	        y1 = i;
  	        ketemuKosong = true;

  	      } else if ( tabel[i][j]=='.' && ketemuKosong ){

  	        ketemuKosongBerurutan = true;

  	      } else if ( tabel[i][j]=='*' && ketemuKosong ){
  	        ketemuKosong = false;
  	      }

  	    }
  	    
  	  }
  	}

  	//Cari pasangan (x1,y1) & (x2,y2) yang bisa di isi secara vertikal
  	for (int j = 0; j <= m+1; ++j)
  	{
  	  int x1, y1, x2, y2;
  	  bool ketemuKosong = false, ketemuKosongBerurutan = false;
  	  for (int i = 0; i <= n+1; ++i)
  	  {
  	    if (ketemuKosongBerurutan)
  	    {
  	      if (tabel[i][j]=='*')
  	      {
  	        x2 = j;
  	        y2 = i-1;

  	        pair<int,int> p1 = make_pair(x1,y1);
  	        pair<int,int> p2 = make_pair(x2,y2);

  	        // printf("XNYA = %d\n", x2);

  	        tempatYangDiisi.push_back( make_pair(p1,p2) );
  	        // printf("MASUKKK\n");

  	        ketemuKosong = false;
  	        ketemuKosongBerurutan = false;
  	      }

  	    } else {

  	      if (tabel[i][j]=='.' && !ketemuKosong)
  	      {
  	        x1 = j;
  	        y1 = i;
  	        ketemuKosong = true;

  	      } else if ( tabel[i][j]=='.' && ketemuKosong ){

  	        ketemuKosongBerurutan = true;

  	      } else if ( tabel[i][j]=='*' && ketemuKosong ){
  	        ketemuKosong = false;
  	      }

  	    }
  	    
  	  }
  	}
  }

  
  // printf("PETANYA\n");

  // for (int i = 0; i <= n+1; ++i)
  // {
  //   for (int j = 0; j <= m+1; ++j)
  //   {
  //     cout<<tabel[i][j];
  //   }
  //   cout<<endl;
  // }

  // printf("MASUK\n");
  if (k == 1)
  {
    cout<<banyakJawaban<<endl;
  } else {

    for (int i = 0; i < tempatYangDiisi.size(); ++i)
    {
      int x1 = tempatYangDiisi[i].first.first;
      int y1 = tempatYangDiisi[i].first.second;
      int x2 = tempatYangDiisi[i].second.first;
      int y2 = tempatYangDiisi[i].second.second;
      // cout<<x1<<y1<<x2<<y2<<endl;


      int panjangTempatYangDiisi = (int) hypot( abs(x1-x2) , abs(y1-y2) ) + 1;
      banyakJawaban+= max(0,panjangTempatYangDiisi-k+1);
    }
    cout<<banyakJawaban<<endl;

  }

 

  
  return 0;
}


