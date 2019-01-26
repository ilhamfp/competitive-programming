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
    int n;
    string s;

    map<int, char> mappingAngka;
    map<char, int> mappingKarakter;

    mappingKarakter['R'] = 0;
    mappingKarakter['G'] = 1;
    mappingKarakter['B'] = 2;
    mappingAngka[0] = 'R';
    mappingAngka[1] = 'G';
    mappingAngka[2] = 'B';

    cin >> n;
    cin >> s;
    int banyak = 0;

    for (int i = 1; i < s.size(); ++i)
    {
        if (s[i] == s[i-1])
        {
            banyak++;
            if (i==s.size()-1)
            {
                s[i] = mappingAngka[(mappingKarakter[s[i]]+1)%3];
            } else {
                if (s[i] == 'R' && s[i+1]=='G')
                {
                    s[i] = 'B';
                } else if (s[i] == 'R' && s[i+1]=='B')
                {
                    s[i] = 'G';
                } else if (s[i] == 'G' && s[i+1]=='R')
                {
                    s[i] = 'B';
                } else if (s[i] == 'G' && s[i+1]=='B')
                {
                    s[i] = 'R';
                } else if (s[i] == 'B' && s[i+1]=='R')
                {
                    s[i] = 'G';
                } else if (s[i] == 'B' && s[i+1]=='G')
                {
                    s[i] = 'R';
                } else {
                    s[i] = mappingAngka[(mappingKarakter[s[i]]+1)%3];
                }
            }
            
        }
    }

    cout << banyak << endl;
    cout << s << endl;
    return 0;
}


