#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265

int main() {
	int h,v;
	cin >> h >> v;
	int hasil;
	hasil = ceil(h/sin(v*PI/180));
	cout << hasil << endl;

    return 0;
}