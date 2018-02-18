#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265


int main(){
	int hilang1, hilang2, n;
	int a = 0,b=0,c=0;
	scanf("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		int x;
		scanf("%d", &x);
		a+=x;
	}
	for (int i = 0; i < n-1; ++i)
	{
		int x;
		scanf("%d", &x);
		b+=x;

	}
	for (int i = 0; i < n-2; ++i)
	{
		int x;
		scanf("%d", &x);
		c+=x;
	}

	hilang1 = a-b;
	hilang2 = b-c;
	printf("%d\n", hilang1);
	printf("%d\n", hilang2);


    return 0;
}