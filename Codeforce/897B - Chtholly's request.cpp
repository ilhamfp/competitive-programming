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



vector<ll> num;
ll besar=2;
int AreAll9s (ll n );
 
void generateNextPalindromeUtil (int n)
{
    
    int mid = n/2;
 
    
    bool leftsmaller = false;
 
    
    int i = mid - 1;
 
    
    int j = (n % 2)? mid + 1 : mid;
 
    
    while (i >= 0 && num[i] == num[j])
        i--,j++;
 
    
    if ( i < 0 || num[i] < num[j])
        leftsmaller = true;
 
    
    while (i >= 0)
    {
        num[j] = num[i];
        j++;
        i--;
    }
 
    
    if (leftsmaller == true)
    {
        int carry = 1;
        i = mid - 1;
 
        
        if (n%2 == 1)
        {
            num[mid] += carry;
            carry = num[mid] / 10;
            num[mid] %= 10;
            j = mid + 1;
        }
        else
            j = mid;
 
       
        while (i >= 0)
        {
            num[i] += carry;
            carry = num[i] / 10;
            num[i] %= 10;
            num[j++] = num[i--]; 
        }
    }
}
 

ll generateNextPalindrome(int n )
{
    int i;
 

    if( AreAll9s( n ) )
    {
        num[0]=1;
        for( i = 1; i < n; i++ )
            num[i]=0;
        num.pb(0);
        num.pb(1);
        besar++;
        besar++;
    }
 

    else
    {
        generateNextPalindromeUtil ( n );
 
    }
    ll tempHasil=0;
    // ll besar = sizeof (num)/ sizeof(num[0]);
    for (ll ii = 0; ii < besar; ++ii)
    {
        tempHasil= (tempHasil*10)+num[ii];
    }
    return tempHasil;
}
 

int AreAll9s( ll n )
{
    ll i;
    for( i = 0; i < n; ++i )
        if( num[i] != 9 )
            return 0;
    return 1;
}
 
 

int main()
{
    num.pb(1);
    num.pb(0);
    ll k, p;
    cin >> k >> p;
    ll hasil=0;
    for (ll i = 0; i < k; ++i)
    {
        // ll n = sizeof (num)/ sizeof(num[0]);
        // cout << "besarnya=" << n;nl
        ll temp = generateNextPalindrome( besar );
        //printf("%d\n", temp);
        hasil+= temp;
    }

    cout << (hasil%p) << endl;

    
 
    return 0;
}
