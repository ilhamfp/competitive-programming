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
    ll t;
    cin>>t;
    for (ll i = 1; i <=t; ++i)
    {
        string s;
        cin>>s;

        ll tempInt = -1;
        for (ll j = 0; j < s.size(); ++j)
        {
            if (tempInt == -1)
            {
                if (s[j] == 'B')
                {
                    tempInt = 1;
                }
            } else {
                if (s[j] == 'B')
                {
                    tempInt = (tempInt*10)+1;
                } else {
                    tempInt = (tempInt*10);
                }
            }
        }
        tempInt = convert(tempInt);
        if (tempInt%3 == 0)
        {
            cout<<"Case #"<<i<<": "<<"Semar"<<endl;

        } else {
            cout<<"Case #"<<i<<": "<<"Gareng"<<endl;

        }
    }
    return 0;
}
