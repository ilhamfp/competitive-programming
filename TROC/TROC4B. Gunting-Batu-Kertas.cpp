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
    int n, ans = 0;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int countG = 0, countB = 0, countK = 0;
    for (int i = 0; i < s1.size(); ++i)
    {
        if (s1[i] == 'G')
        {
            countG++;
        } else if (s1[i] == 'B'){
            countB++;
        } else {
            countK++;
        }
    }

    for (int i = 0; i < s2.size(); ++i)
    {
        if (s2[i] == 'G')
        {
            if (countB)
            {
                countB--;
                ans++;
            }
        } else if (s2[i] == 'B'){
            if (countK)
            {
                countK--;
                ans++;
            }
        } else {
            if (countG)
            {
                countG--;
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}


