#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define p push
#define ll long long
#define fi first
#define se second   
#define pii pair< int , int >
#define pll pair< long , long >
#define pi acos(-1.0)
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define MOD 10e9+7
#define line puts("")
#define INF_INT -2147483648

using namespace std;

int n;
map<int, int > m;
int main(){
	
	cin>>n;
	
	for (int i = 1; i <= n; ++i)
	{
		int x;
		cin>>x;
		m[i] = (x);
	}
	bool ada = false;
	for (int i = 1; i <= n; ++i)
	{
		int sekarang = i;
		int sekarangSuka = m[i];
		int suka1 = m[sekarangSuka];
		int sukaI = m[suka1];
		if (sukaI == i)
		 {
		 	ada = true;
		 	break;
		 } 
	}

	if (ada)
	{
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	return 0;
}