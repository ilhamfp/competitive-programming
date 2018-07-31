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
    int n,k,ans=0;
    cin>>n>>k;
    for (int i = 0; i < k; ++i)
    {
        if (n%10==0)
        {
            n/=10;
        } else {
            n--;
        }
    }
    cout<<n;
    return 0;
}