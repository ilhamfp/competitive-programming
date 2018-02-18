#include <stdio.h>
#include <string.h>

int main()
{
	int i, panjang, UC = 0, LC = 0, charbenar;
	char masukan[100];
	scanf("%s", &masukan);
	panjang = strlen(masukan);
	for (i = 0; i < panjang; i++)
	{
		if ((masukan[i]>=65 ) &&  (masukan[i]<= 90 )){
			UC++;
		} else {
			LC++;
		}
	} 
	
	if (LC>= UC) {
		for (i = 0; i < panjang; i++)
		{
			if ((masukan[i]>=65 ) &&  (masukan[i]<= 90 )){
				charbenar = masukan[i]+32;
				printf("%c", charbenar);
			} else {
				printf("%c",masukan[i]);
			}
		}
	 
	} else {
		for (i = 0; i < panjang; i++)
		{
			if ((masukan[i]>=65 ) &&  (masukan[i]<= 90 )){
				
				printf("%c", masukan[i]);
			} else {
				charbenar = masukan[i]-32;
				printf("%c",charbenar);
				}
		}
	}
	
	printf("\n");
 
	return 0;
}
