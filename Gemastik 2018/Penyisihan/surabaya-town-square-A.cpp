#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };

bool cmp (int i,int j) { return (i>j); }

int main()
{
    // Surabaya Town Square
    // TC
    // 10 10 3 2
    // 0
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int n,m,t,d,l;
    cin>>n>>m>>t>>d;
    cin>>l;
    int jawaban = 0;
    for (int r = 0; r < n; r=r+t+d)
    {
        // cout<<"masuk r"<<endl;
        int count = 0;
        for (int rt = r; rt < r+t && rt<n; ++rt)
        {
            int mulai = 0;
            if (count%2==1)
            {
                mulai = 1;
            }

            for (int c = 0; c < m; c=c+t+d)
            {
                // cout<<"masuk c"<<endl;

                for (int ct = c+mulai; ct < c+t && ct<m; ct+=2)
                {
                    // cout<<"masuk ct"<<endl;

                    jawaban++;
                }
            }
            count++;
        }
        
    }

    cout<<jawaban<<endl;

    return 0;
}