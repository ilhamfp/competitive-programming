#include <stdio.h>
#include <string.h>

typedef struct { 
  int TI[101]; /* memori tempat penyimpan elemen (container) */
  int Neff; /* >=0, banyaknya elemen efektif */
} TabInt;

int main()
{
	
	TabInt KS;
	int i, q, panjang, karakter, unik;
	char masukan[100];
	scanf("%s", &masukan);
	panjang = strlen(masukan);
	karakter = 0;
	KS.Neff = 0;
	unik = 1;
	for (i = 0; i < panjang; i++)
	{
		for (q = 0; q < KS.Neff; q++)
		{
			if( masukan[i] == KS.TI[q])
			{
				unik = 0;
			}
	
		}
		if (unik == 1)
		{
			karakter++;
			KS.TI[KS.Neff] = masukan[i];
			KS.Neff++;
		} 
		
		unik = 1;
		
	
	} 
	
	
	if ((karakter % 2) == 1){
		printf("IGNORE HIM!");
	} else {
		printf("CHAT WITH HER!");
	}
	
	printf("\n");
 
	return 0;
}
