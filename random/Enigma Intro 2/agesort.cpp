#include <bits/stdc++.h>
using namespace std;

int main(){

	int N, masukan;
	std::vector<int> v;

	scanf("%d", &N);
	while(N){
		for (int i = 0; i < N; ++i)
		{
			scanf("%d", &masukan);
			v.push_back(masukan);
		}
		sort(v.begin(), v.end());

		for (int i = 0; i < N; ++i)
		{
			printf("%d", v[i] );

			if (i != (N-1)){
				printf(" ");
			}
		}

		printf("\n");
		v.clear();

		scanf("%d", &N);
	}

	return 0;
}
