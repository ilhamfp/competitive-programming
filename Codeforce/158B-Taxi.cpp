#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, s;
    int n1 = 0, n2 = 0, n3 = 0, n4 = 0, hasil = 0;
    scanf("%d", &n);
    while (n--){
        scanf("%d", &s);

        if (s == 1){
          n1++;
           
        } 
        if (s == 2) n2++;
        if (s == 3) n3++;
        if (s == 4) n4++;        
        
    }

    hasil += n4;
        n4 = 0;
    if (n1>=n3) {
        hasil += n3;
        n1 = n1-n3;
        n3 = 0;
    } else {
        hasil += n3;
        n1 = 0;
        n3 = 0;
    }
    
    div_t divresult;
    divresult = div (n2,2);

    hasil += divresult.quot;
    n2 = divresult.rem;

    if ((n1 != 0) && (n2 != 0)) {
        if (n1 > 2){
            n1 -= 2;
            hasil++;
            hasil+= ceil(n1/4.0);
        } else {
            hasil++;
        }  
    } else if ((n1 == 0) && (n2 != 0)) {
        hasil++;
    } else if ((n1 != 0) && (n2 == 0)) {
        hasil+= ceil(n1/4.0);
    }

    printf("%d\n", hasil);

    return 0;
}