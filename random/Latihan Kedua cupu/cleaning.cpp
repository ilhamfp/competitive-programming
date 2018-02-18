#include <bits/stdc++.h>
using namespace std;

bool cmp (int A, int B){
	return A>B;
}


int main(){
	
	int T, n, m, tidak, i1, i2, test;
	int pekerjaan[1050];
	std::vector<int> chef;
	std::vector<int> ass;
	stack<int> pekerjaanbenar;

	scanf("%d", &T);

	for (int qq = 0; qq < T; ++qq)
	{
		scanf("%d", &n);
		scanf("%d", &m);
		for (int i = 1; i <= n; ++i)
		{
			pekerjaan[i] = i;
		}


		for (int i = 0; i < m; ++i)
		{
			scanf("%d", &tidak);
			pekerjaan[tidak] = 9999;
		}

		sort(&pekerjaan[1], &pekerjaan[n+1], cmp);
		
		for (int i = 1; i <= n; i++)
		{
			if (pekerjaan[i] != 9999)
			{
				pekerjaanbenar.push(pekerjaan[i]);
			}
		}




		while(!pekerjaanbenar.empty()){
			chef.push_back(pekerjaanbenar.top());
			pekerjaanbenar.pop();
			if(!pekerjaanbenar.empty()){
				ass.push_back(pekerjaanbenar.top());
				pekerjaanbenar.pop();
			}
		}


		i1 = 0;

		while((!chef.empty()) && (i1 != chef.size())){
			printf("%d ", chef[i1]);
			i1++;
		}
		printf("\n");


		i2 = 0;
		while((!ass.empty()) && (i2 != ass.size())){
			printf("%d ", ass[i2]);
			i2++;
		}
		printf("\n");



		chef.clear();
		ass.clear();



	}




	return 0;
}