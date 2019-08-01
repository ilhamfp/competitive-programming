#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int n, I, x, total_bits;
    cin >> n >> I;
    total_bits = I*8;
    int k_kecil = total_bits/n;

    int max_distinct = 0;
    if (k_kecil>30)
    {
    	max_distinct = n;
    } else {
    	max_distinct = (1<<k_kecil);
    }

    vector<int> v;

    for (int j = 0; j < n; ++j)
    {
    	cin >> x;
    	v.pb(x);
    }

    sort(v.begin(), v.end());

    int l = 0;
    map<int, int> count_val;
    int min_cur_buang = INT_MAX;
    for (int r = 0; r < n; ++r)
    {
    	count_val[v[r]]++;
    	while ((int)count_val.size() > max_distinct){
    		count_val[v[l]]--;
    		if (count_val[v[l]] == 0)
    		{
    			count_val.erase(v[l]);
    		}
    		l++;
    	}
    	// l..r pasti valid
    	int cur_buang = n - (r - l + 1);
    	min_cur_buang = min(min_cur_buang, cur_buang);

    }

    cout << min_cur_buang << endl;
    return 0;
}

