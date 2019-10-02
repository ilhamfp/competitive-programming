#include <bits/stdc++.h>
using namespace std;
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;

int getType(char c){
	if (c == '1' || c == '2')
	{
		return 1;
	} else {
		return 2;
	}
}

int main()
{
	int q;
	cin >> q;
	for (int i = 0; i < q; ++i)
	{
		int n;
		cin >> n;
		string s1, s2;
		cin >> s1;
		cin >> s2;
		int curRow = 1;
		int curCol = 1;
		int lastType = 1;
		int lastRow = 1;
		bool bisa = true;
		
		while ( curCol < n+1 && bisa) {
			if (curCol == n)
			{
				if (curRow == 1)
				{
					if (getType(s1[curCol-1]) == 1)
					{
						bisa = false;
					} else {
						if (getType(s2[curCol-1]) == 1)
						{
							bisa = false;
						} else {
							curRow++;
						}
					}
				} else {
					if (getType(s2[curCol-1]) == 2)
					{
						bisa = false;
					} else {
						curCol++;
					}
					
				}
			}

			int type;
			if (curRow == 1)
			{
				type = getType(s1[curCol-1]);
			} else {
				type = getType(s2[curCol-1]);
			}

			if ((lastRow != curRow) && (lastType == 2) && (type == 1))
			{
				bisa = false;
			} else {
				if (type == 1)
				{
					curCol++;
					lastType = 1;
					lastRow = curRow;
				} else {
					lastType = 2;
					if (lastRow != curRow)
					{
						curCol++;
						lastRow = curRow;
					} else {
						if (curRow == 1)
						{
							curRow = 2;
							lastRow = 1;
						} else {
							curRow = 1;
							lastRow = 2;
						}
					}
				}
			}
		}

		if (bisa)
		{
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
    return 0;
}

