#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;
typedef unsigned long long ull;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };

bool cmp (int i,int j) { return (i>j); }

int binaryKeDecimal(int n)
{
    int num = n;
    int dec_value = 0;
     
    int base = 1;
     
    int temp = num;
    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp/10;
         
        dec_value += last_digit*base;
         
        base = base*2;
    }
     
    return dec_value;
}

int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin>>s;
        vector<int> v;
        for (int j = 0; j < s.size(); j+=6)
        {
            string temp  = s.substr(j,5);
            int cur = stoi(temp);
            // cout<<cur<<"  "<<j<<endl;
            v.pb(binaryKeDecimal(cur));
        }

        for (int j = 0; j < v.size(); ++j)
        {
            // cout<<v[j];
            cout<<((char)(v[j]-1+'a'));
        }
        cout<<endl;

    }
    return 0;
}