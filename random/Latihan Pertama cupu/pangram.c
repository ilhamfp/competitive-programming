#include <stdio.h>
#include <string.h>
#include <math.h>


int main()
{
	int N, ketemu, kepangraman = 0;

	scanf("%d", &N);
	char S[N];
	scanf("%s", &S);
	
	for( int i = 0; S[i]; i++){
	S[i] = tolower(S[i]);
	}
	
	for (int i = 97; i <= 122; i++)
	{
		ketemu = 0;
		for(int q = 0; (q<N) && (ketemu == 0); q++){
			
			if(S[q] == i){
				ketemu = 1;
			}
			
		}
		
		if (ketemu == 1){
			kepangraman++;
		}
		
	}
	
	if (kepangraman == 26){
		printf("YES");
	} else {
		printf("NO");
	}
	
	

	
	
	printf("\n");
	return 0;
}
