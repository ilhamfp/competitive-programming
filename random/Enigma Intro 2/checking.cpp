#include <bits/stdc++.h>
using namespace std;


int main(){
	
	string masukan1, masukan2, monday = "monday", tuesday = "tuesday";
	string wednesday = "wednesday", thursday = "thursday", friday ="friday", saturday="saturday";

	int Nmasukan1, Nmasukan2;
	cin >> masukan1 >> masukan2;


	
	if (masukan1.compare(monday) == 0){
		Nmasukan1 = 2;
	} else if (masukan1.compare(tuesday) == 0){
		Nmasukan1 = 3;
	} else if (masukan1.compare(wednesday) == 0){
		Nmasukan1 = 4;
	} else if (masukan1.compare(thursday) == 0){
		Nmasukan1 = 5;
	} else if (masukan1.compare(friday) == 0){
		Nmasukan1 = 6;
	} else if (masukan1.compare(saturday) == 0){
		Nmasukan1 = 0;
	} else {
		Nmasukan1 = 1;
	}


	if (masukan2.compare(monday) == 0){
		Nmasukan2 = 2;
	} else if (masukan2.compare(tuesday) == 0){
		Nmasukan2 = 3;
	} else if (masukan2.compare(wednesday) == 0){
		Nmasukan2 = 4;
	} else if (masukan2.compare(thursday) == 0){
		Nmasukan2 = 5;
	} else if (masukan2.compare(friday) == 0){
		Nmasukan2 = 6;
	} else if (masukan2.compare(saturday) == 0){
		Nmasukan2 = 0;
	} else {
		Nmasukan2 = 1;
	}


	if ( ((Nmasukan1) == Nmasukan2)  || ((Nmasukan1+2)%7 == Nmasukan2) || ((Nmasukan1+3)%7 == Nmasukan2)  )  {
		printf("YES\n");
	} else {
		printf("NO\n");
	}


	return 0;
}