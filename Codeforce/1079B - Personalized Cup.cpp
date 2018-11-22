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
    int r = 1, c = s.size();
    if (c>20)
    {
        r = ceil((double)c / (double)20.0);
        c = ceil((double)c / (double)r);
    }
    
    int sisaAsterisk = (r*c)-s.size();
    int counter = 0;
    cout << r << " " << c << endl;
    for (int i = 0; i < r; ++i)
    {
        int banyakAsterisk = sisaAsterisk/(r-i);
        for (int j = 0; j < c - banyakAsterisk; ++j)
        {
            cout << s[counter];
            counter++;
        }
        for (int i = 0; i < banyakAsterisk; ++i)
        {
            cout << "*";
            sisaAsterisk--;
        }
        cout << endl;
    }

    return 0;
}