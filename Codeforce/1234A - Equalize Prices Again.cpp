#include <bits/stdc++.h>
using namespace std;
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;

int main()
{
	int q;
	cin >> q;
	for (int i = 0; i < q; ++i)
	{
		int n, x;
		ll sum = 0;
		cin >> n;
		for (int j = 0; j < n; ++j)
		{
			cin >> x;
			sum += x;
		}
		sum = ceil((double)sum/(double)n);
		cout << sum << endl;

	}
    return 0;
}

