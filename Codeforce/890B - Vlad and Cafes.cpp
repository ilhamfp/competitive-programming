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

int v[200010];
int main(){
    memset(v,-1,sizeof v);
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        int x; 
        scanf("%d",&x);
        v[x] = i;
    }
    
    int mn = 1e9;
    int id = -1;
    for (int i = 0; i < 200010; ++i){
        if(v[i] < mn and v[i] != -1){
            mn = v[i];
            id = i;
        }
    }
    
    printf("%d\n",id);
    return 0;
}