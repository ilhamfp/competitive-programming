#include <bits/stdc++.h>


using namespace std;

bool cmp(pair<int,int> A, pair<int,int> B){
	return A.second>B.second;
}


int main(){
	int n, m, a, b, banyak = 0, kotakMasuk = 0;
	vector< pair<int, int> > v;
	pair<int, int> p;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < m; ++i)
	{
		scanf("%d %d", &a, &b);
		p = make_pair(a, b);

		v.push_back(p);
	}

	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < m; ++i)
	{
		if (kotakMasuk+v[i].first < n){
			kotakMasuk+=v[i].first;
			banyak+=v[i].second*v[i].first;
		} else {
			banyak+=(n-kotakMasuk)*v[i].second;
			break;
		}
	}



	printf("%d\n", banyak);

	return 0;
}