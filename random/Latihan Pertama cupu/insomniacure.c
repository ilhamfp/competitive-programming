#include <stdio.h>
#include <string.h>

int main()
{
	int banyak, k, l, m, n, d, i;
	
	scanf("%d", &k);
	scanf("%d", &l);
	scanf("%d", &m);
	scanf("%d", &n);
	scanf("%d", &d);
	banyak = 0;
	
	for (i = 1; i<=d; i++)
	{
		if ((((i % k) == 0) || ((i % l) == 0)) || (((i % m) == 0) || ((i % n) == 0)))
		{
			banyak++;
		}
	}
	
	
	
	
	
	printf("%d", banyak);
	printf("\n");
 
	return 0;
}
