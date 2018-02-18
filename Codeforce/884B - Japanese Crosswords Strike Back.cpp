#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265


int main(){
    int n, x;
    cin >> n >> x;
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        int m;
        cin >> m;
        sum += m;
    }
    string hasil = ((x-(n-1)-sum) == 0)? "YES" : "NO";
    cout << hasil << endl;

    return 0;
}