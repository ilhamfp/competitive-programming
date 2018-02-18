#include <bits/stdc++.h>
using namespace std;

int jA,jB;

int asd[1000][1000];

int cari(int jAn, int jBn) {
    int &hasil=asd[jAn][jBn];
    if (hasil!=-1) {
        return hasil;
    }
    if (jAn<=0 && jBn<=0) {
        hasil=0;
        return 0;
    }
    hasil=0;
    if (jAn-2>=0) {
        hasil=max(hasil,cari(jAn-2,jBn+1));
    }
    if (jBn-2>=0) {
        hasil=max(hasil,cari(jAn+1,jBn-2));
    }
    hasil++;
    return hasil;
}


int main() {
    memset(asd,-1,sizeof asd);
    scanf("%d %d",&jA,&jB);
    printf("%d\n",max(0,cari(jA,jB)-2));
    return 0;
}