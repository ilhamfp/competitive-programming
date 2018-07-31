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


ll n,k;
vector<ll> v;
int main(){
	cin>>n>>k;
	ll jenis,banyak, sisa;
	bool ketemu = false;
	for (int i = 0; i < k; ++i)
	{
		ll x;
		cin>>x;
		v.pb(x);
		if (!ketemu)
		{
			if (n>=x)
			{
				ketemu = true;
				jenis = i+1;
				banyak = n/x;
				sisa = n - (x*banyak);
			}
		} else {
			ll tempBanyak, tempSisa;
			tempBanyak = n/x;
			tempSisa = n - (x*tempBanyak);
			if (tempSisa < sisa)
			{
				sisa = tempSisa;
				banyak = tempBanyak;
				jenis = i+1;
			}
		}
	}

	if (ketemu)
	{
		printf("%lld %lld\n", jenis, banyak);
	} else {
		printf("1 0\n", jenis, banyak);
	}
	
	
	return 0;
}