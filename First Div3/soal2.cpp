#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back   
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<string, int> m;
    for (int i = 0; i < s.size()-1; ++i)
    {
        string temp = "";
        for (int j = i; j < i+2; ++j)
        {
            temp+=s[j];
        }
        m[temp]++;
    }
    int ans = 0;
    string jaw;
    for (auto p:m)
    {
        if (p.second>ans)
        {
            ans = p.second;
            jaw = p.first;
        }
    }
    cout<<jaw<<endl;
    return 0;
}