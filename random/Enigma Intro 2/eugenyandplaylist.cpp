#include <bits/stdc++.h>
using namespace std;

int main(){

    long int n, m; 
    scanf("%ld %ld", &n, &m);
    vector<long int> changeTimes(n + 1, 0);
    for(int k = 1; k <= n; k++){
        long int repeats, duration; 
        scanf("%ld %ld", &repeats, &duration);
        changeTimes[k] = changeTimes[k - 1] + repeats * duration;
    }

    long int currentIndex = 0;
    while(m--){
        long int search; 
        scanf("%ld", &search);
        while(search > changeTimes[currentIndex]){
            ++currentIndex;
        }
        printf("%ld\n", currentIndex);
    }

    return 0;
}