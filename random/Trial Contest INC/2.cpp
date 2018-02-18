
#include <bits/stdc++.h>
#define pb push_back
#define nl cout << endl
#define lp(i, n) for(int i = 0; i < n; i++)
using namespace std;
std::vector<int> vnilaiY;
std::vector<int> vnilaiX;
map<int,int> ttgX;
map<int,int> ttgY;

int main()
{
	int n;
	int x, y;
	vector<int> vx;
	vector<int> vy;
	set<pair<int,int>> masukan;
	set<int> setX;
	set<int> setY;
	
	cin >> n;
	// masukan
	lp(i, n)
	{
		cin >> x >> y;
		masukan.insert(make_pair(x,y));
		setX.insert(x);
		setY.insert(y);

	}
	// pindahin nilai x   ke vx
	std::set<pair<int,int>>::iterator itmx;
	pair<int,int> ax;
	for (itmx = masukan.begin(); itmx!=masukan.end(); ++itmx){
    	ax = *itmx;
    	vx.pb(ax.first);
	}

	// pindahin nilai y   ke vy
	std::set<pair<int,int>>::iterator itmy;
	pair<int,int> ay;
	for (itmy=masukan.begin(); itmy!=masukan.end(); ++itmy){
    	ay = *itmy;
    	vy.pb(ay.second);
	}


	int ans = 0;
	int ansx = 0;
	int ansy = 0;
	int ansx2 = 0;
	int ansy2 = 0;

	// //buat set X yang yang isinya nilai X yang unik
	// std::vector<int>::iterator tesx;5
	// for ( tesx=vx.begin(); tesx!=vx.end(); ++tesx){
 //    	setX.insert(*tesx);
	// }

	// //buat set Y yang yang isinya nilai Y yang unik
	// std::vector<int>::iterator tesy;
	// for ( tesy=vy.begin(); tesy!=vy.end(); ++tesy){
 //    	setY.insert(*tesy);
	// }

	//cari nilai X yang paling banyak sama
	std::set<int>::iterator itx;
	for (itx=setX.begin(); itx!=setX.end(); ++itx){
    	ansx2 = count(vx.begin(), vx.end(), *itx);

		ttgX[*itx] = ansx2;
	}

	//cari nilai Y yang paling banyak sama
	std::set<int>::iterator ity;
	for (ity=setY.begin(); ity!=setY.end(); ++ity){
		ansy2 = count(vy.begin(), vy.end(), *ity);

		ttgY[*ity] = ansy2;
	}

	std::set<pair<int,int>>::iterator itung;
	pair<int,int> itungin;
	int yangX, yangY, nilaiItung;
	for (itung = masukan.begin(); itung!=masukan.end(); ++itung){
    	itungin = *itung;
    	yangX = itungin.first;
    	yangY = itungin.second;
    	nilaiItung = max(0,(ttgX[yangX]-1)) + max(0,(ttgY[yangY]-1));

    	if (nilaiItung > ans){
    		ans = nilaiItung;
    	}
	}
	
 
	// hitung mana yang banyak tetangga X atau Y

	cout << ans << endl;
	
	return 0;
}
