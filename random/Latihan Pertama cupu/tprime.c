#include <stdio.h>

int main()
{
	int N, X, i, pembagi, i2;
	
	scanf("%d", &N);
	
	for( i = 1; i<=N; i++)
	{
		scanf("%d", &X);
		pembagi = 0;
		
		for( i2 = 1;(i2<=X) ; i2++)
		{
			if ((X % i2) == 0)
			{
				pembagi++;
			}
			
		}
		
		if (pembagi == 3)
		{
			printf("YES\n");
		} else
		{
			printf("NO\n");
		}
		
	}
 
	return 0;
}
