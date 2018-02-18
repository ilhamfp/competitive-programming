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


int main(){
	int N,K;
	cin>> N >> K;
	string s;
	cin>>s;
	int banyakNol=0;
	for (int i = 0; i < s.size(); ++i)
	{
		if(s[i]=='0'){
			banyakNol++;
		}

	}

	if (banyakNol==N)
	{
		printf("%d\n", N*K);
	} else {
		if(K>1){
			s+=s;
		}

		int sum=0;
		int sumMax=0;
		for (int i = 0; i < s.size(); ++i)
		{
			if (s[i]=='0')
			{
				sum++;
				sumMax = sum > sumMax? sum:sumMax;
			} else {
				sum=0;
			}
		}
		printf("%d\n",sumMax );
	}
    return 0;
}