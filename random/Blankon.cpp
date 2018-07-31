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

ll convert(ll input)
{
    int decimalNumber = 0, i = 0, remainder;
    while (input!=0)
    {
        remainder = input%10;
        input /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n ; ++i)
    {
        string s, ans = "";
        cin>>s;
        int tempInt = -1;
        for (int j = 0; j < s.size(); ++j)
        {
            if (s[j]=='#')
            {
                ans += ' ';
                tempInt = -1;
            } else if (s[j]=='/'){
                if (s[j-1] != '#')
                {
                    //cout<<tempInt<<endl;
                                    ans += (char) (convert(tempInt)+64);
                                    tempInt = -1;
                }
            } else {
                if (tempInt == -1)
                {
                    if (s[j] == '-')
                    {
                        tempInt = 1;
                    }
                } else {
                    if (s[j] == '-')
                    {
                        tempInt = (tempInt*10)+1;
                    } else {
                        tempInt = (tempInt*10);
                    }
                }
            }
        }
        cout<<"Case #"<<i<<": "<<ans<<endl;
    }

    return 0;
}
