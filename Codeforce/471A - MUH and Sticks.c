// # ======================================= #
// # Ilham Firdausi Putra, 18 Desember 2017  #
// # ======================================= #
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define nl printf("\n");

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 


int main()
{

	vector<int> v(10,0);

	for(int p = 0; p < 6; p++)
	{
		int temp; 
		scanf("%d", &temp); 
		v[temp]++;
	}
	sort(v.begin(), v.end());

	if(v[9] < 4)
	{
		puts("Alien");
	} else if(v[8] == 2 || v[9] == 6)
	{
		puts("Elephant");
	} else if(v[8] == 1 || v[9] == 5)
	{
		puts("Bear");
	}

	return 0;
}