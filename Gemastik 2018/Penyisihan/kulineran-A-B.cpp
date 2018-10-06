#define ll long long
#define mp make_pair
#define pb push_back
#define fi first
#define se second

ll n,i,t,a[100002],hasil,tmp,tmp2;

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    a[0]=1;
    a[1]=1;
    for(i=2;i<=100000;i++){
        ll left = ((i*i)%1000000007*a[i-1]);
        ll right = (((i*((i-1)*(i-1))*a[i-2])/2))%1000000007;
        a[i]=left-right;
        a[i]%=1000000007;
        // tmp=a[i-1]; tmp2=a[i-2];
    }

    cin>>t; hasil=1;
    for(i=0;i<t;i++){
        cin>>n;
        cout<<a[n]<<"\n";
    }
}
