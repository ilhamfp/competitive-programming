#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265


int main() {
	string masukan;
	cin >> masukan;
	int nomor=1;
	for (auto i = masukan.begin(); i < masukan.end(); ++i)
	{
		if(*i == 'A'){

			if (nomor == 1){
				nomor = 2;
			} else if (nomor == 2){
				nomor = 1;
			}

		} else if (*i == 'B'){

			if (nomor == 2){
				nomor = 3;
			} else if (nomor == 3){
				nomor = 2;
			}

		} else if (*i == 'C'){
			if (nomor == 1){
				nomor = 3;
			} else if (nomor == 3){
				nomor = 1;
			}

		}
	}
	cout << nomor << endl;

    return 0;
}