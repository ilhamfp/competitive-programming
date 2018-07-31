#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265


int main(){
	std::vector<int> v;
	int n;
	unsigned long long k;
	scanf("%d", &n);
	cin >> k;
	while(n--){
		int x;
		scanf("%d", &x);
		v.push_back(x);
	}
	int nmax = *max_element(v.begin(),v.end());

	unsigned long long menang = 0;
	unsigned long long i = 0;
	int Power = v[i];

	while((menang != k) && (Power != nmax) ){
		if(Power > v[i+1]){
			menang++;
			i++;
		} else {
			menang = 1;
			Power = v[i+1];
			i++;
		}
	}

	printf("%d\n", Power);

    return 0;
}