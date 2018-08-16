#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;
typedef unsigned long long ull;

int main(){
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    vector<int> v;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == t[i])
        {
            continue;
        }
        int cari = -1;
        for (int j = i+1; j < s.size(); ++j)
        {
            if (s[j] == t[i])
            {
                cari = j;
                break;
            }
        }

        if (cari==-1)
        {
            cout<<-1<<endl;
            return 0;
        }

        for (int j = cari-1; j >= i ; --j)
        {
            swap(s[j],s[j+1]);
            v.pb(j+1);
        }
    }

    cout<<v.size()<<endl;
    for (int i = 0; i < v.size(); ++i)
    {
        cout<<v[i]<<" ";
    }    
    cout<<endl;

    return 0;
}
