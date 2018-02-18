#include <bits/stdc++.h>
using namespace std;

int jA;
int asd[1000000];

int cari(int jAn) {
    int &hasil=asd[jAn];
    if (hasil!=-1) {
        return hasil;
    }

    hasil=(cari(jAn-1) + cari(jAn-2)) % 100000007;
    return (hasil);
}


int main() {
    int t, n, x;
    memset(asd,-1,sizeof asd);
    //set awal
    asd[0] = 0;
    asd[1] = 1;
    asd[2] = 1;
    asd[3] = 2;
    asd[4] = 3;
    asd[5] = 5;
    scanf("%d",&t);
    while(t--){
        scanf("%d", &n);
        printf("%d\n", cari(n));
    }
    return 0;
}