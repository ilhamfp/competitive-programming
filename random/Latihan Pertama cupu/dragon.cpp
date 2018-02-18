#include <bits/stdc++.h>
using namespace std;

int main()
{
	bool menang;
	pair<int,int> K;
	vector<pair<int,int> > V;
	int S, N, X, Y, i, min;

	cin >> S >> N;
	for (int i = 1; i <= N; ++i)
	{
		cin >> X >> Y;
		K = make_pair(X,Y);
		V.push_back(K);
	}
	
	sort(V.begin(),V.end());
	menang = true;

	for (int i = 0; (i<N) && (menang==true); ++i)
	{
		if (V[i].first < S)
		{
			S = S + V[i].second;
		} else
		{
			menang = false;
		}
	}

	if (menang == true) {
		cout << "YES" << endl;
	} else
	{
		cout << "NO" << endl;
	}

	return 0;
}
