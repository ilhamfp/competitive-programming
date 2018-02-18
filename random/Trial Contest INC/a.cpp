#include <bits/stdc++.h>
using namespace std;


int main() {
    vector<int> v; 

    int n, x, sum=0, max1, min2;

    scanf("%d", &n);

    while(n--){
        scanf("%d", &x);
        v.push_back(x);
        sum+= x;
    }

    sort(v.begin(), v.end());
    max1 = v.back();
    min2 = v.front();
    x=0;
    while ((x == max1) || (x == min2) || (x == sum) ){
        x++;
    }
    printf("%d\n", x);

}