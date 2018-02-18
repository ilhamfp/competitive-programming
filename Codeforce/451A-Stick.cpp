#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, x;
    cin >> n >> k;
    int nilai = min(n,k);
    if (nilai % 2 == 0) {
        cout << "Malvika" << endl;
    } else {
        cout << "Akshat" << endl;
    }


    return 0;
}