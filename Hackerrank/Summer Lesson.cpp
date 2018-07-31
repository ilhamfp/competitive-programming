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

int n,m;
int arr[10101];
int main() {
	cin>>n>>m;
	for (int i = 0; i <n ; ++i)
	{
		int x;
		cin>>x;
		arr[x]++;
		// printf("isi %d = %d\n", x,arr[x] );
	}

	for (int i = 0; i < m; ++i)
	{
		if (i!= (m-1))
		{
			printf("%d ", arr[i] );
		} else {
			printf("%d", arr[i] );
		}
		
	}
	printf("\n");
	return 0;
}