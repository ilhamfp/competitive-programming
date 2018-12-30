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
    int y,b,r;
    cin >> y >> b >> r;
    bool bisa = true;
    int counter = 1;
    do{
        if (y<counter || b<counter+1 || r<counter+2)
        {
            bisa = false;
        } else {
            counter++;
        }
    }while(bisa);
    counter--;
    cout << counter+counter+counter+3 << endl;
    
    return 0;
}


