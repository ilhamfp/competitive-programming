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
    int a,b,c;
    cin >> a >> b >> c;
    if (a != 7 && b != 7 && c != 7)
    {
        cout << 7 << endl;
    } else if (a != 13 && b != 13 && c != 13){
        cout << 13 << endl;
    } else if (a != 19 && b != 19 && c != 19) {
        cout << 17 << endl;
    } else {
        cout << 41 << endl;
    }
    
    return 0;
}


