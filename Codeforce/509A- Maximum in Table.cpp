#include<bits/stdc++.h>
using namespace std;


int main() {
	int tab[11][11];
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			if ((i == 1) || (j == 1))
			{
				tab[i][j] = 1;
			} else {
				tab[i][j] = tab[i-1][j] + tab[i][j-1];
			}

		}
	}


	printf("%d\n", tab[n][n]);
}