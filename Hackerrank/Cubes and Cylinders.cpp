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

bool cmpPoin1( pair <int,int> a, pair <int,int> b ){
	return a.first>b.first;
}

bool cmpPoin2( pair <int,int> a, pair <int,int> b ){
	return a.first<b.first;
}

int n,m;
int S[1000];
int K[1000];
int R[1000];
int C[1000];
vector< pair <int,int> > pairBarang;
vector< pair <int,int> > pairKotak;
int main() {
	cin>>n>>m;
	for (int i = 0; i < n; ++i)
	{
		cin>>S[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>K[i];
	}
	for (int i = 0; i < m; ++i)
	{
		cin>>R[i];
	}
	for (int i = 0; i < m; ++i)
	{
		cin>>C[i];
	}

	for (int i = 0; i < n; ++i)
	{
		pairBarang.pb(make_pair(S[i],K[i]));
	}

	for (int i = 0; i < m; ++i)
	{
		pairKotak.pb(make_pair(R[i],C[i]));
	}

	sort(pairBarang.begin(), pairBarang.end(), cmpPoin2);
	sort(pairKotak.begin(), pairKotak.end(), cmpPoin1);
	stack<int> stackBarang;
	for (int i = 0; i < n; ++i)
	{
		int besarBarang = pairBarang[i].first;
		int banyakBarang = pairBarang[i].second;
		for (int i = 0; i < banyakBarang; ++i)
		{
			stackBarang.push(besarBarang);
		}
	}
	int ans = 0;
	for (int i = 0; i < m; ++i)
	{
		int banyakKotak = pairKotak[i].second;
		int besarKotak = pairKotak[i].first;
		float diameterKotak = 2*besarKotak;
		for (int j = 0; j < banyakKotak; ++j)
		{
			bool masuk = false;
			while( (!stackBarang.empty()) && !masuk ){
				float panjangBarang = stackBarang.top()* sqrt(2);
				if ( panjangBarang >= diameterKotak)
				{
					stackBarang.pop();
				} else {
					ans++;
					stackBarang.pop();
					masuk = true;
				}
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}