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
	bool foundNumber = false, foundLC= false, foundUC= false, foundSC= false;
	string numbers = "0123456789";
	string lower_case = "abcdefghijklmnopqrstuvwxyz";
	string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string special_characters = "!@#$%^&*()-+";
	int n;
	scanf("%d", &n);
	string masukan;
	cin >> masukan;
	for (int i = 0; i < n; ++i)
	{
		for (int ii = 0; (ii < numbers.size()) && (foundNumber == false); ++ii)
		{
			if (masukan[i] == numbers[ii])
			{
				foundNumber = true;
			}
		}

		for (int ii = 0; (ii < lower_case.size()) && (foundLC == false); ++ii)
		{
			if (masukan[i] == lower_case[ii])
			{
				foundLC = true;
			}
		}

		for (int ii = 0; (ii < upper_case.size()) && (foundUC == false); ++ii)
		{
			if (masukan[i] == upper_case[ii])
			{
				foundUC = true;
			}
		}

		for (int ii = 0; (ii < special_characters.size()) && (foundSC == false); ++ii)
		{
			if (masukan[i] == special_characters[ii])
			{
				foundSC = true;
			}
		}


	}

	int hasil = 0;

	if (foundNumber == false)
	{
		hasil ++;
	}
	if (foundSC == false)
	{
		hasil ++;
	}
	if (foundUC == false)
	{
		hasil ++;
	}
	if (foundLC == false)
	{
		hasil ++;
	}


	while ((n+hasil)<6){
		hasil++;
	}
	
	cout << hasil << endl;




    return 0;
}