// # ======================================= #
// # Ilham Firdausi Putra, 22 Desember 2017  #
// # ======================================= #
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define nl printf("\n");

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 

const int MAXN = 101010;
const long long MAXK = 1010101010101010101ll;

std::vector<ll> v;
string awal = "What are you doing at the end of the world? Are you busy? Will you save us?";
string nextAwal = "What are you doing while sending \"";//34 karakter pertama
string nextTengah = "\"? Are you busy? Will you send \"";//32 karakter ditengah
string nextAkhir = "\"?";//2 karakter diakhir

void CekAns(ll a, ll b){
  if (a==0)
  {
    printf("%c", awal[b-1]);
  } else {
    if (b<=34)
    {
      printf("%c", nextAwal[b-1]);

    } else if( (b<= (34+v[a-1]) )   ){
      CekAns((a-1),(b-34));

    } else if ( (b<= (34+v[a-1]+32) ) ) {
      int tempB = b-(34+v[a-1]);
      printf("%c", nextTengah[tempB-1]);
    } else if ( (b<= (34+v[a-1]+32+v[a-1]) ) ){
      CekAns((a-1),(b-(34+v[a-1]+32)));
    } else {
      int tempB = b-(34+v[a-1]+32+v[a-1]);
      // cout << "INI TEMPB =" << tempB;nl
      printf("%c", nextAkhir[tempB-1]);
    }
    
  }
}

int main()
{
  //cout<< awal.size();nl
  int q;
  cin >> q;
  int defined=0;
  
  v.pb(awal.size());

  while(defined!=MAXN){
    v.pb(  min(MAXK,(2*v[defined])+68)   );
    defined++;
  }
  for (int i = 0; i < q; ++i)
  {
    ll n,k;
    scanf("%lld %lld", &n, &k);

    if (k <= v[n])
    {
      CekAns(n,k);
    } else {
      printf(".");
    }
  }

  nl
  return 0;
}
