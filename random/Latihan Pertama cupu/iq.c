#include <stdio.h>
#include <string.h>
#include <math.h>


int main()
{
	int N, ketemuGenap = 0, nilai, ketemuGanjil = 0, indeksGenap, indeksGanjil;
	
	
	scanf("%d", &N);
	int i;
	
	for(i = 1; i<= N; i++)
	{
		
		scanf("%d", &nilai);
		if (nilai & 1){		
			ketemuGanjil++;
			indeksGanjil = i;
		} else {
			ketemuGenap++;
			indeksGenap = i;
		}
	}
	
	if (ketemuGanjil == 1) {
		printf("%d", indeksGanjil);
	} else {
		printf("%d", indeksGenap);
	}

		

	printf("\n");
	return 0;
}
