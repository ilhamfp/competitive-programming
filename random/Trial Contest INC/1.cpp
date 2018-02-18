
#include <bits/stdc++.h>
#define pb push_back
#define nl cout << endl
#define lp(i, n) for(int i = 0; i < n; i++)
using namespace std;

int main()
{
	int n;
	int x, y;
	vector<pair<int, int>> v;
	
	cin >> n;
	
	lp(i, n)
	{
		cin >> x >> y;
		v.pb(make_pair(x,y));
	}
	
	int ans = 0;
	lp(i, n)
	{
		pair<int, int> temp = v[i];
		int tans = 0;
		lp(j, n)
		{
			if (i != j)
			{
				if( ((temp.first == v[j].first) and (temp.second != v[j].second)) or ((temp.second == v[j].second) and (temp.first != v[j].first)) )
				{
					tans++;
				}
			}
		}
		if (ans < tans)
		{
			ans = tans;
		}
	}
	
	cout << ans << endl;
	
	return 0;
}
