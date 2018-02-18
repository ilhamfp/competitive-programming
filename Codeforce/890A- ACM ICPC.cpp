#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265
#define pb push_back
#define mp make_pair
#define nl printf("\n");
#define lp(i, n) for(int i = 0; i < n; i++)
#define rep(i, a, n) for(int i = a; i < n; i++)
#define bft bool found = true
#define bff bool found = false
#define llvmin ll vmin = 1e9
#define llvmax ll vmax = -1e9
#define llans ll ans = 0
#define vi vector<int>      
#define vl vector<long>         
#define vll vector<long long>   
#define pii pair<int, int>          
#define pll pair<long long, long long>  

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;

int num[maxn];

int main()
{
    int sum=0;
    for(int i=0;i<6;i++)
    {
        cin>>num[i];
        sum+=num[i];
    }
    if(sum%2==1)
    {
        printf("NO\n");
        return 0;
    }

    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            for(int k=j+1;k<6;k++)
            if(num[i]+num[j]+num[k]==sum/2)
            {
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");
    return 0;
}