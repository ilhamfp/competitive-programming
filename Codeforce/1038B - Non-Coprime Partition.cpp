#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;
typedef unsigned long long ull;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };

bool cmp (int i,int j) { return (i>j); }

int main()
{
    int n;
    cin>>n;
    if (n==1 || n==2)
    {
        cout<<"No"<<endl;
    } else {
        vector<int> ans1,ans2;
        for (int i = 1; i <= n; ++i)
        {
            if (i%2==0)
            {
                ans1.pb(i);
            } else {
                ans2.pb(i);
            }
        }

        cout<<"Yes"<<endl;
        cout<<ans1.size();
        for (int i = 0; i < ans1.size(); ++i)
        {
            cout<<" "<<ans1[i];
        }
        cout<<endl;
        cout<<ans2.size();
        for (int i = 0; i < ans2.size(); ++i)
        {
            cout<<" "<<ans2[i];
        }
        cout<<endl;
    }
    return 0;
}