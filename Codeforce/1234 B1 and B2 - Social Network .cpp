#include <bits/stdc++.h>
using namespace std;
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;

int main()
{
	int n, k, x;
	cin >> n >> k;
	map<int, bool> inside;
	queue<int> q;


	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		if (!inside[x])
		{
			if (q.size() == k)
			{
				int cur = q.front();
				q.pop();
				inside[cur] = false;
				inside[x] = true;
				q.push(x);
			} else {
				inside[x] = true;
				q.push(x);
			}
		}
	}

	vector<int> ans;
	while (!q.empty()){
		int cur = q.front();
		ans.push_back(cur);
		q.pop();
	}

	cout << ans.size() << endl;
	for (int i = ans.size()-1; i >= 0; --i)
	{
		cout << ans[i] << " ";
	}

	cout << endl;

    return 0;
}

