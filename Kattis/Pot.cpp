// Ilham Firdausi Putra (c)Masih Pemula
#include <bits/stdc++.h>

using namespace std;



int main() {
	int x, sum=0;
	int n;
	scanf("%d", &n);
	while(n--){
		scanf("%d", &x);
		// printf("%d\n", ((x - (x % 10))/10) );
		// printf("%d\n", (x % 10) );
		sum+= pow( ((x - (x % 10))/10),(x % 10));
	}
	printf("%d\n", sum );

	return 0;
}