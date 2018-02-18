#include <bits/stdc++.h>
using namespace std;


int main(){
	
	int T, N, S[5005], masukan, minimum, temp;

	scanf("%d", &T);
	for (int i = 0; i < T; ++i)
	{
		scanf("%d", &N);
		for (int i = 0; i < N; ++i)
		{
			scanf("%d", &masukan);
			S[i] = masukan;
		}
		sort(&S[0], &S[N]);
		minimum = abs(S[0] - S[1]);
		if (N != 2){
			for (int i = 1; i < (N-1); ++i)
			{
				temp = abs(S[i] - S[i+1]);
				if (minimum > temp){
					minimum = temp;
				}
			}

		}
		printf("%d\n", minimum);



	}



	return 0;
}