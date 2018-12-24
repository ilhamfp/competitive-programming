#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    string s;
    cin >> s;
    string ans = "";
    int besar = s.size();
    int start = ceil(besar/2.0);
    s = " " + s;
    if (besar % 2 == 1)
    {
        for (int i = start; i <= besar; ++i)
        {
            if (i == start)
            {
                ans += s[i];
            } else {
                ans += s[i];
                ans += s[start-(i-start)];
            }
        }
    } else {
        for (int i = start; i < besar; ++i)
        {
            ans += s[start-(i-start)];
            ans += s[i+1];
        }
    }
    cout << ans << endl;
    return 0;
}


