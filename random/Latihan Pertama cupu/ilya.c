#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	
	int state, c1, c2;
	scanf("%d", &state);
	
	
	
	if (state >=0) {
		printf("%d", state);
	} else {
		
		//case 1, delete paling akhir
		
		
		c1 = (state/10);
		//case 2, delete paling awal
		
		c2 = ((state/100)*10) - ((-state) % 10);
		
		if (c1>=c2) {
			printf("%d", c1);
		} else {
			printf("%d", c2);
		}
		
		
	}
	
	printf("\n");
	return 0;
}
