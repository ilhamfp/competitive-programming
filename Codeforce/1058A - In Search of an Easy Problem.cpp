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
    int n,x, banyak = 0, maks = 0;
    bool hard = false;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin>>x;
        if (x==1)
        {
            hard = true;
        }
    }
    if (hard)
    {
        cout<<"HARD"<<endl;
    } else {
        cout<<"EASY"<<endl;
    }

    return 0;
}