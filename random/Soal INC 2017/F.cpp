// Ilham Firdausi Putra (c)Masih Pemula
#include <bits/stdc++.h>

using namespace std;



int nilaiSet (vector<int> v){
	int nilai = *max_element(v.begin(),v.end()) + 1;


	for (auto i = v.begin(); i < v.end()-1; ++i)
	{

		auto k = i+1;
		int x = *k - *i;

		nilai = min(nilai,x);

	}
	
	return nilai;
}

int main() {
	int n,k,x;
	vector<int> b;

	int hasil = -1;
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++){
		scanf("%d", &x);
		b.push_back(x);
	}
	sort(b.begin(), b.end());

	vector<int> vhitung;
	vhitung.push_back(*(b.end()-1));
	vhitung.push_back(*b.begin());

	b.erase( b.begin() );
	b.erase( b.end()-1 );

	k = k - 2;
	bool masih = true;
	if (k == 0){
			masih = false;
		}
	while(masih){
		if(b.size() % 2 == 1){
			int indeksMasuk = (ceil(b.size()/2.0));
			vhitung.push_back(b[indeksMasuk-1]);
			b.erase(b.begin()+indeksMasuk-1);
		} else {
			int indeksMasuk = (b.size()/2.0);
			int hasil1;
			int hasil2;
			vector<int> vtes1 = vhitung;
			vector<int> vtes2 = vhitung;
			vtes1.push_back(b[indeksMasuk-1]);
			vtes2.push_back(b[indeksMasuk]);
			sort(vtes1.begin(), vtes1.end());
			sort(vtes2.begin(), vtes2.end());
			hasil1 = nilaiSet(vtes1);
			hasil2 = nilaiSet(vtes2);

			if (hasil1 > hasil2)
			{
				vhitung = vtes1;
				b.erase(b.begin()+indeksMasuk-1);
			} else {
				vhitung = vtes2;
				b.erase(b.begin()+indeksMasuk);
			}
		}

		k--;
		if (k == 0){
			masih = false;
		}

	}
	// sudah ketemu multi set dengan besar K yang memiliki nilai terbesar.
	sort(vhitung.begin(), vhitung.end());
	hasil = nilaiSet(vhitung);

	printf("%d\n", hasil);

	return 0;
}