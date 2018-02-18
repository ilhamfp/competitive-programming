		#include <stdio.h>
		#include <string.h>
		#include <math.h>

		int main()
		{
			int jarak, hasil;
			scanf("%d", &jarak);
			
			if (jarak <= 5){
				
				printf("1");
			} else if (jarak % 5 == 0 ) {

				printf("%d", jarak/5);
			} else {
				
				hasil = (jarak / 5) + 1;
				printf("%d", hasil);
				
			}
			
			printf("\n");
			return 0;
			
		}
