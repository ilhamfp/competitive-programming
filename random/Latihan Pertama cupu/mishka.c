#include <stdio.h>




int main()
{
	int N, M, C, NilaiM = 0, NilaiC = 0;
	scanf("%d",&N);
	
	for(int i = 1; i<=N; i++)
	{
		scanf("%d", &M);
		scanf("%d", &C);
		if (M>C){
			NilaiM++;
		} else if (C>M){
			NilaiC++;
		} 
	}
	if (NilaiM>NilaiC) {
	 printf("Mishka");
	} else if (NilaiC>NilaiM) {
		printf("Chris");
	} else {
		printf("Friendship is magic!^^");
	}

		

	printf("\n");
	return 0;
}
