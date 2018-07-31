#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back 
#define pii pair< int , int >
#define pll pair< long , long >
#define pi acos(-1.0)
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define MOD 10e9+7

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 
using namespace std;

int main()
{
    string s;
    cin>>s;
    int ans=6;
    for (int a = 0; a < 10; ++a)
    {
        for (int b = 0; b < 10; ++b)
        {
            for (int c = 0; c < 10; ++c)
            {
                for (int d = 0; d < 10; ++d)
                {
                    for (int e = 0; e < 10; ++e)
                    {
                        for (int f = 0; f < 10; ++f)
                        {
                            if ((a+b+c)==(d+e+f))
                            {
                                int temp = 0;
                                temp+=(s[0]!=a+'0');
                                temp+=(s[1]!=b+'0');
                                temp+=(s[2]!=c+'0');
                                temp+=(s[3]!=d+'0');
                                temp+=(s[4]!=e+'0');
                                temp+=(s[5]!=f+'0');
                                ans = min(ans,temp);
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
