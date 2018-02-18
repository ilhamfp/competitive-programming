#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, banyakS = 0, banyakM = 0;
	string masukan;

	scanf("%d", &t);
	while(t--){
		cin>> masukan;

		for (int i = 0; i < masukan.length(); ++i)
		{
			if ((i == 0) && (masukan[i] == 'm')){
				if (masukan[i+1] == 's'){
					masukan[i+1] = 'a';
					continue;
				}
			}

			if (masukan[i] == 'm') {
				if (masukan[i-1] == 's'){
					masukan[i-1] = 'a';
				} else if (masukan[i+1] == 's') {
					masukan[i+1] = 'a';
				}
			}

		}

		for (int i = 0; i < masukan.length(); ++i)
		{
			if (masukan[i] == 'm'){
				banyakM++;
			} else if (masukan[i] == 's')
			{
				banyakS++;
			}
		}

		if (banyakS > banyakM) {
			cout << "snakes" << endl;

		} else if (banyakM > banyakS) {
			cout << "mongooses" << endl;

		} else {
			cout << "tie" << endl;
		}

		banyakS = 0;
		banyakM = 0;

	}



	return 0;
}