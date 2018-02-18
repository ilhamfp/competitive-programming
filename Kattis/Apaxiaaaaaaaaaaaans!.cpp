#include <bits/stdc++.h>
using namespace std;

int main() {
	string masukan;
	cin >> masukan;
	char x;
	x = *(masukan.begin());
	cout << x;
	for (auto i = masukan.begin()+1; i < masukan.end(); ++i)
	{
		char nilai = *i;
		if (nilai != x){
			cout << nilai;
			x = nilai;
		}

	}
	cout << endl;

    return 0;
}