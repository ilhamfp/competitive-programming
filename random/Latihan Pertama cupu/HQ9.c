#include <stdio.h>
#include <string.h>

int main()
{
	int i, panjang, kebenaran;
	char masukan[101];
	scanf("%s", &masukan);
	panjang = strlen(masukan);
	kebenaran = 0;
	
	for (i = 0; i < panjang; i++)
	{
		if (masukan[i] == 'H'){
			kebenaran++;
		}
		if (masukan[i] == 'Q'){
			kebenaran++;
		}
		if (masukan[i] == '9'){
			kebenaran++;
		}

		
		
	} 
	
	if (kebenaran > 0){
		printf("YES");
	} else {
		printf("NO");
	}
	
	printf("\n");
 
	return 0;
}
