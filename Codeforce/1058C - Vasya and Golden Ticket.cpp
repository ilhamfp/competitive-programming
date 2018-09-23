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

int n;
string s;
vector<int> v;

bool cek(int awal, int akhir, int besar){
    // cout<<"Masuk: "<<besar<<endl;
    // cout<<"Awal: "<<awal<<" Akhir: "<<akhir<<endl;
    int sum = 0;
    for (int i = awal; i <= akhir; ++i)
    {
        sum+=v[i];
        // cout<<"Sum second: "<<sum<<endl;
        if(sum>besar){
            break;
        }else if (sum == besar)
        {
            if (i==akhir)
            {
                return true;
            } else {
                return cek(i+1, akhir, besar);
            }
        } 
    }
    // if (sum==0)
    // {
    //     return true;
    // }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    cin>>n;
    cin>>s;
    bool ketemuNonZero = false;
    for (int i = 0; i < s.size(); ++i)
    {
        int angka = s[i]-'0';
        if (angka>0)
        {
            ketemuNonZero = true;
        }
        if (!ketemuNonZero || angka!=0)
        {
            v.pb(angka);
        }
        
        
    }

    // for (int i = 0; i < v.size(); ++i)
    // {
    //     cout<<v[i]<<endl;
    // }

    bool lucky = false;
    if (v.size()!=1)
    {
        int sum = 0;
        for (int i = 0; i <= v.size()-2; ++i)
        {
            sum+=v[i];
            // cout<<"Sum main: "<<sum<<endl;
            lucky = cek(i+1,v.size()-1, sum);
            if (lucky)
            {
                break;
            }
        }
    }
    

    if (lucky)
    {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }

    return 0;
}