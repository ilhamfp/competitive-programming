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
    // 3 Angka Zig Zag
    // TC
    // 2
    // 5
    // 2 8 1 5 7
    // 4
    // 2 8 1 5
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i)
    {
        int n, jawaban = 0;;
        cin>>n;
        vector<int> v;
        vector<int> vbesarKiri;
        vector<int> vkecilKiri;
        vector<int> vbesarKanan;
        vector<int> vkecilKanan;

        int a;
        for (int j = 0; j < n; ++j)
        {
            cin>>a;
            v.pb(a);
            vbesarKiri.pb(0);
            vkecilKiri.pb(0);
            vbesarKanan.pb(0);
            vkecilKanan.pb(0);
            for (int k = 0; k < j; ++k)
            {
                if (v[k]>a)
                {
                    vkecilKanan[k]++;
                    vbesarKiri[j]++;
                } else if (a>v[k]){
                    vbesarKanan[k]++;
                    vkecilKiri[j]++;
                }
            }
        }

        for (int j = 0; j < n; ++j)
        {
            jawaban+= (vkecilKiri[j]*vkecilKanan[j]);
            jawaban+= (vbesarKiri[j]*vbesarKanan[j]);
        }
        cout<<jawaban<<endl;
    }

    return 0;
}