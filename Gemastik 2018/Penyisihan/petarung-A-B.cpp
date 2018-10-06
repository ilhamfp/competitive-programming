// # ===============================
// # (c) MidAndFeed aka ASilentVoice
// # ===============================
#include <bits/stdc++.h>
using namespace std;

int main()
{
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	long long t, n, x, y = 0;
	vector<long long> arr;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> x;
		arr.push_back(x);
	}
	if (t == 1) {
		arr.push_back(LLONG_MIN);
	}
	sort(arr.begin()+1, arr.end());
	int flag = 1;
	long long power = arr[0];
	for (int i = 1; i < t; i++) {
		flag = power >= arr[i];
		if (!flag) break;
		power = abs(power - arr[i]);
	}
	puts(flag ? "menang" : "kalah");
	if (flag) {
		for (int i = 0; i < t; i++) {
			cout << arr[i];
			if (i+1 < t) cout << " ";
			else cout << endl;
		}
	}
	
	// fclose(stdin);
	// fclose(stdout);

	return 0;
}
