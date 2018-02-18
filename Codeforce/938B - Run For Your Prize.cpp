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


int n, jawaban = 0, pos1 = 1, pos2 = 1000000;

int main(){
	cin>>n;
	// printf("%d %d\n", pos1, pos2 );
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin>>x;
		int jarak1 = abs(x - pos1);
		int jarak2 = abs(x - pos2); 
		if (jarak1<jarak2)
		{
			jawaban += jarak1;
			pos1 += jarak1;
			pos2 -= jarak1;
		} else {
			if (x<pos2)
			{
				jawaban+=jarak2;
				pos1+=jarak1;
				pos2-=jarak2;
			}
		}
	}

	cout<<jawaban<<endl;
	return 0;
}