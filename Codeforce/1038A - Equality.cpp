#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;
typedef unsigned long long ull;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };

bool cmp (int i,int j) { return (i>j); }

int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int tab[30];
    memset(tab,0,sizeof(tab));
    for (int i = 0; i < s.size(); ++i)
    {
        if ((s[i]-'A') < k)
        {
            tab[(s[i]-'A')]++;
        }
    }
    int minimum = 100000000;
    int sum = 0;
    for (int i = 0; i < k; ++i)
    {
        sum+=tab[i];
        minimum = min(minimum,tab[i]);
    }
    int banyak = minimum*k;
    int beda = sum- banyak;
    int jaw = (s.size()-beda);
    cout<<jaw<<endl;
    return 0;
}