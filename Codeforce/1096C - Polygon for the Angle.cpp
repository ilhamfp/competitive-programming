#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };

ll MOD =      998244353;


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    map<double, int> degrees;
    degrees[60.0] = 3;
    for (int sisi = 4; sisi <= 180; ++sisi)
    {
        int banyakBagi = sisi-2;
        double besar = ((double)(sisi-2) * (double)180) / (double)sisi;
        if (degrees[besar] == 0)
        {
            degrees[besar] = sisi;
        }
        double kurangPerCount = besar/(double)banyakBagi;
        do{
            besar-=kurangPerCount;
            if (degrees[besar] == 0)
            {
                degrees[besar] = sisi;
            }
        }while(besar>0);

    }
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        double ang;
        cin >> ang;
        if (ang == 179)
        {
            cout << 360 << endl;
        } else {
            cout << degrees[ang] << endl;
        }
    }
    return 0;
}


