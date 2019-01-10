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
    cin >> n;
    int maks = n/3;
    string s;
    cin >> s;
    int b0 = 0, b1 = 0, b2 = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '0')
        {
            b0++;
        } else if(s[i] == '1'){
            b1++;
        } else {
            b2++;
        }
    }

    while(!((b0 == maks) && (b1 == maks) && (b2 == maks))){

        if (b0 > maks)
        {
            if (b2 < maks)
            {
                for (int i = s.size()-1; i >=0 && b0>maks && b2<maks; --i)
                {
                    if (s[i] == '0')
                    {
                        s[i] = '2';
                        b2++;
                        b0--;
                    }
                }
            } else if (b1 < maks)
            {
                for (int i = s.size()-1; i >=0 && b0>maks && b1<maks; --i)
                {
                    if (s[i] == '0')
                    {
                        s[i] = '1';
                        b1++;
                        b0--;
                    }
                }
            }
        } else if (b1 > maks)
        {
            if (b0 < maks)
            {
                for (int i = 0; i < s.size() && b1>maks && b0<maks; ++i)
                {
                    if (s[i] == '1')
                    {
                        s[i] = '0';
                        b0++;
                        b1--;
                    }
                }
            } else if (b2 < maks)
            {
                for (int i = s.size()-1; i >=0 && b1>maks && b2<maks; --i)
                {
                    if (s[i] == '1')
                    {
                        s[i] = '2';
                        b2++;
                        b1--;
                    }
                }
            }
        } else if (b2 > maks)
        {
            if (b0 < maks)
            {
                for (int i = 0; i < s.size() && b2>maks && b0<maks; ++i)
                {
                    if (s[i] == '2')
                    {
                        s[i] = '0';
                        b0++;
                        b2--;
                    }
                }
            } else if (b1 < maks)
            {
                for (int i = 0; i < s.size() && b2>maks && b1<maks; ++i)
                {
                    if (s[i] == '2')
                    {
                        s[i] = '1';
                        b1++;
                        b2--;
                    }
                }
            }
        }

    }

    cout << s << endl;
    
    
    return 0;
}


