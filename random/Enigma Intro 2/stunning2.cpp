#include <bits/stdc++.h>


using namespace std;

int main(){
	unsigned long long int N, a, b;
	int T;
	scanf("%d", &T);
	while(T>0){
		scanf("%llu %llu %llu", &N, &a, &b);
		unsigned long long int gcd = __gcd(a, b);
		for(int i=0; i<gcd ;i++)
			printf("%llu", N);
		printf("\n");
		T--;
	}
	return 0;
}