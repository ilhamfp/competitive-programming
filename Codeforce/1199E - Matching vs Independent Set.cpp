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
    int t;
    cin >> t;
    for (int j = 0; j < t; ++j)
    {
        int n, m;
        map<int, bool> match;
        map<int, int> degree;
        vector<int> jaw;
        cin >> n >> m;

        vector< pair<int,int> > input;

        for (int i = 0; i < m; ++i)
        {
            int x, y;
            cin >> x >> y;
            x--;y--;
            degree[x]++;
            degree[y]++;
            input.pb(mp(x,y));
        }

        // random_shuffle(input.begin(), input.end());

        for (int i = 0; i < input.size(); ++i)
        {
            int x, y;
            x = input[i].first;
            y = input[i].second;
            if (!match[x] && !match[y])
            {
                jaw.pb(i);
                match[x] = true;
                match[y] = true;         
            }
        }

        if (jaw.size() >= n)
        {
            cout << "Matching" << endl;
            for (int i = 0; i < n; ++i)
            {
                cout << jaw[i]+1 << " ";
            }   
            cout << endl;
        } else {
            cout << "IndSet" << endl;
            int count = 0;
            for(int i = 0; i < 3*n && count != n; i++){
                if (match[i] == false)
                {
                    cout << i+1 << " ";
                    count++;
                }
            }
            cout << endl;
        }
    }

    return 0;
}

