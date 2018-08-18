/*
Detektif DUH
Duh adalah seorang detektif yang sedang melakukan investigasi pada suatu kasus. Dari petunjuk yang
Duh dapatkan pada kasus ini, Duh mendapatkan sebuah clue dimana dia mendapatkan secarik kertas
yang dicurigai merupakan sebuah sandi untuk membuka tabir misteri kasus yang sedang di selidiki oleh
Duh.

Selain mendapatkan clue dari secarik kertas, Duh juga mendapatkan clue dari rekan Detektif yang lain
yaitu berupa kata yang kemungkinan ada kaitanya dengan kata di secarik kertas yang dimiliki ohe Duh.
Akan tetapi kata-kata tersebut terselipkan sebuah simbol bintang (*) dan tanda tanya "?", dimana
simbol bintang (*) berarti dapat dicocokan dengan semua suku kata (termasuk suku kata kosong),
sedangkan untuk tanda tanya (?) berarti hanya dapat dicocokkan dengan satu karakter.
Bantulah Duh memecahkan tabir misteri dengan melakukan chek pada kertas yang didapatkan nya dari
rekannya dan secarik kertas yang Duh dapatkan.

INPUT
pada baris pertama program akan meminta masukan yaitu kata yang didapatkan Duh dari dari hasil
investigasinya.
Pada baris kedua memasukkan banyaknya test case (kata dari secarik kertas yang didapatkan oleh Duh)
yang akan diuji coba.
Pada baris selanjutnya menginputkan clue yang berupa string yang didapatkan oleh Duh dari rekan kerja
detektifnya.

OUTPUT
Menampilkan “YES” jika kata yang terdapat di secarik kertas cocok dengan clue yang sudah didapatkan
dari rekan Detektifnya. Dan menampilkan “NO” jika kata pada secarik kertas tidak sesuai dengan clue
yang didapatkan.

Input 
zhajelfhiejke
3
z*f??e*
?a******
?h********ejke

Output
YES
NO
YES

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int n;
	cin >> n;
	while (n--) {
		string x;
		cin >> x;
		string temp = "";
		for (int i = 0; i < x.size(); i++) {
			if (x[i] == '*') {
				while (i+1 < x.size() and x[i+1] == '*') i++;
				temp += "(.*)";
			} else {
				if (x[i] == '?') {
					temp += "(.)";
				} else {
					temp += x[i];
					while (i+1 < x.size() and x[i+1] != '*' and x[i+1] != '?') {
						temp += x[++i];
					}
				}
			}
		}

		string result = regex_replace(s,regex(temp),"");

		if (result.size()==0)
		{
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}
