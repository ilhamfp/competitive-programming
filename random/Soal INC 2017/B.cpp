#include<bits/stdc++.h>
using namespace std;

int main () {
	set<int> setpeta;
	vector<int> v;

	int N, M, K, pImart = 0, pAmart = 0, x;

	scanf("%d %d %d", &N, &M, &K);
	int penghitung = M;
	while(penghitung--){
		scanf("%d", &x);
		setpeta.insert(x);
	}

	std::set<int>::iterator itx;
	for (itx=setpeta.begin(); itx!=setpeta.end(); ++itx){
		v.push_back(*itx);
	}
	sort(v.begin(), v.end());
	if (K>=M){
		pImart = N;
	} else if ((K<M) && (v[0] == 1)){
		pImart = v[K-1] + ceil((v[K]-v[K-1])/2) + 1;
	} else if ((K<M) && (v[0] != 1)){
		pImart = v[K-1] + ceil((v[K]-v[K-1])/2) + 1;
	}

	printf("%d\n", pImart);

	return 0;
}

