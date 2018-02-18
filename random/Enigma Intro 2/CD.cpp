#include <bits/stdc++.h>


using namespace std;

int main(){

	int N, M, banyak, katalog;
	std::vector<int> v1;
	std::vector<int> v2;
	stack<int> s1;
	stack<int> s2;
	scanf("%d %d", &N, &M);

	while( (N != 0) && (M != 0)  ){
		banyak = 0;

		if (!v1.empty()) {
			v1.pop_back();
		}

		if (!v2.empty()) {
			v2.pop_back();
		}


		for (int i = 0; i < N; ++i)
		{
			scanf("%d", &katalog);
			v1.push_back(katalog);


		}

		for (int i = 0; i < M; ++i)
		{
			scanf("%d", &katalog);
			v2.push_back(katalog);

		}

		while( (!v1.empty()) && (!v2.empty()) ){
			if (v1.back() > v2.back()){
				v1.pop_back();

				continue;
			} 


			if (v1.back() < v2.back()) {
				v2.pop_back();

				continue;
			}
			if (v1.back() == v2.back()) {

				v1.pop_back();
				v2.pop_back();
				
				banyak = banyak + 1;


			}
		}

		printf("%d\n", banyak );
		scanf("%d %d", &N, &M);
	}

	return 0;
}