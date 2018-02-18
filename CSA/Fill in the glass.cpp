#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265


int main(){
    std::vector<int> v;
    int n, k;
    cin >> n >> k;
    while (n--){
    	int x;
    	cin >> x;
    	v.push_back(x);
    }
    int sum = 0;
    sort(v.begin(),v.end());
    for (int i = 0; i < k; ++i)
    {
    	sum += v[i];
    }
	int hasil;
	hasil = ceil(sum/100.0);
	cout << hasil << endl;

    return 0;
}