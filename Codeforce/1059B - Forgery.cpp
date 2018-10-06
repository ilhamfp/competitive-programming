#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };

bool cmp (int i,int j) { return (i>j); }

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int n,m;
    char tab[1010][1010];
    char copytab[1010][1010];
    memset(copytab,'.',sizeof(copytab));
    cin>>n>>m;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin>>s;
        for (int j = 0; j < m; ++j)
        {
            tab[i][j] = s[j];
        }
    }

    // Fill 
    for (int i = 1; i < n-1; ++i)
    {
        for (int j = 1; j < m-1; ++j)
        {
            if ( tab[i-1][j-1] == '#' && tab[i-1][j] == '#' && tab[i-1][j+1] == '#' && tab[i][j-1] == '#' && tab[i][j+1] == '#' && tab[i+1][j-1] == '#' && tab[i+1][j] == '#' && tab[i+1][j+1] == '#' )
            {
                copytab[i-1][j-1] = '#';
                copytab[i-1][j] = '#';
                copytab[i-1][j+1] = '#';

                copytab[i][j-1] = '#';
                copytab[i][j+1] = '#';

                copytab[i+1][j-1] = '#';
                copytab[i+1][j] = '#';
                copytab[i+1][j+1] = '#';
            }
            
        }
    }

    // Check
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (tab[i][j]!=copytab[i][j])
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;

    return 0;
}