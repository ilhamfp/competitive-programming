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
#define INF_INT -2147483648

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 
using namespace std;

ll k,d,t;
int main() {
  cin>>k>>d>>t;
  ll nilaiYangHarusDicapai= 2*t;
  ll a = ceil( (double) k/ (double) d);
  ll interval = d*a;
  ll waktuSetengah = (interval-k);
  ll nilaiInterval = k*2 + waktuSetengah;
  //printf("Nilai interval = %lld\n", nilaiInterval);
  double jawaban;
  if (nilaiYangHarusDicapai%nilaiInterval == 0)
  {
    jawaban = ((double) nilaiYangHarusDicapai/ (double) nilaiInterval) * (double) interval;
  } else {
    ll sisaNilai = nilaiYangHarusDicapai - (nilaiInterval * floor((double) nilaiYangHarusDicapai/ (double) nilaiInterval) );
    //printf("%lld\n", sisaNilai);
    double bagian1 = ((double) floor((double) nilaiYangHarusDicapai/ (double) nilaiInterval) * (double) interval);
    double bagian2;
    if (sisaNilai <= 2*k)
    {
      bagian2 = (double) sisaNilai / 2.0;
    } else {
      double temp1 = ((double) sisaNilai - k*2);
      bagian2 = k + temp1;
    }
    //printf("%f %f\n", bagian1,bagian2);
    jawaban = bagian1 + bagian2;
  }

  printf("%.11f\n", jawaban );

  return 0;
}