#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define fi first
#define se second   
#define pii pair< int , int >
#define pll pair< long , long >
#define pi acos(-1.0)
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define MOD 10e9+7
#define line puts("")
#define INF_INT -2147483647

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 
using namespace std;


int main() {
    int n,m;
    cin>>n>>m;
    queue<int> q1,q2;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin>>x;
        q1.push(x);
    }

    for (int i = 0; i < m; ++i)
    {
        int x;
        cin>>x;
        q2.push(x);
    }

    int banyak = 0, pesan1 = q1.front(), pesan2 = q2.front();
    q1.pop();q2.pop();
    while(!q1.empty() || !q2.empty()){
        // printf("%d %d\n", pesan1, pesan2);
        if (pesan1<pesan2)
        {
            pesan1 += q1.front();
            q1.pop();
        } else if (pesan1>pesan2){
            pesan2 += q2.front();
            q2.pop();
        } else {
            banyak++;
            pesan1 = q1.front();
            q1.pop();
            pesan2 = q2.front();
            q2.pop();
        }
    }
    if (pesan1==pesan2)banyak++;
    
    // printf("%d %d\n", pesan1, pesan2);
    cout<<banyak<<endl;
    return 0;
}