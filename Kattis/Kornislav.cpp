#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265


int main(){
    int a[4];
    for (int i = 0; i < 4; ++i)
    {
    	scanf("%d", a+i);
    }
    sort(a,a+4);
    printf("%d\n", a[0]*a[2]);
    return 0;
}