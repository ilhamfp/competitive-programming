#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265
#define pb push_back
#define mp make_pair
#define nl printf("\n");
#define lp(i, n) for(int i = 0; i < n; i++)
#define rep(i, a, n) for(int i = a; i < n; i++)
#define bft bool found = true
#define bff bool found = false
#define llvmin ll vmin = 1e9
#define llvmax ll vmax = -1e9
#define llans ll ans = 0
#define vi vector<int>      
#define vl vector<long>         
#define vll vector<long long>   
#define pii pair<int, int>          
#define pll pair<long long, long long>  


typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 


int main()
{
	int hasil[100005];
	// memset (hasil,0,100005);
	vector<int> v;
	int n;
	cin>> n;
	int maxI =1;
	int banyakSama =0;
	for (int i = 1; i <= n; ++i)
	{
		int x;
		scanf("%d",&x);
		hasil[i]=x;
		if (i!=1)
		{
			if (x>hasil[maxI])
			{
				maxI=i;
				banyakSama=0;
			} else if(x==hasil[maxI]){
				banyakSama++;
			}
		}
	}
	if (banyakSama)
	{
		cout<<-1<<endl;
	} else{
		cout<<maxI<<endl;
	}
	
    return 0;
}
