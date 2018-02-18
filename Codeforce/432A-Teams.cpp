#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, x;
    std::vector<int> v;
    scanf("%d %d", &n, &k);

    while (n--){
        scanf("%d", &x);
        v.push_back(5-x);
    }
    int ans = 0, ansx;
    for (int i = 5; i>=k; --i){
        ansx = count(v.begin(), v.end(), i);

        ans += ansx;
    }

    int jawaban;
    jawaban = ans/3;

    cout << jawaban << endl;


    return 0;
}