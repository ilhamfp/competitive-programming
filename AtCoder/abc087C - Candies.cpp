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

int N, a[3][10010];

int cari(int i, int j, int sebelumnya){
	int banyak = a[i][j] + sebelumnya;
	int jawaban ;
	// printf("MASUK %d %d\n", i , j );
	if (j == N && i == 2)
	{
		jawaban = banyak;
	} else {
		int jawaban1 = 0, jawaban2 = 0;
		if (i == 1)
		{
			if (j != N)
			{
				jawaban1 = cari(i,j+1,banyak);
			}
			
			jawaban2 = cari(i+1,j,banyak);

		} else {
			if (j != N)
			{
				jawaban1 = cari(i,j+1,banyak);
			}
		}

		jawaban = max(jawaban1,jawaban2);
	}

	return jawaban;
}


int main() {
  cin>>N;

  for (int i = 1; i <= 2; ++i)
  {
  	for (int j = 1; j <= N; ++j)
  	{
  		int x;
  		cin>>x;
  		a[i][j]=x;
  	}
  }

  int hasil = cari(1,1,0);

  cout<<hasil<<endl;

  return 0;
}


