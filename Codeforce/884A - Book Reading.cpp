#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265


int main(){
    int n, t, a[100];
    cin >> n >> t;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        a[i] = x;
    }
    int hari = 1;
    while (t>0){
        t -= 86400 - a[hari-1];
        hari++;
    }
    printf("%d\n", hari-1);

    return 0;
}