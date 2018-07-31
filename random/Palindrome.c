// # ======================================= #
// # Ilham Firdausi Putra, 22 Desember 2017  #
// # ======================================= #
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define nl printf("\n");

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
        num.pb(1);
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
    ll k;
    cin >> k;
    // ini untuk ngeprint semua palindrome dari 0-k
    for (ll i = 0; i < k; ++i)
    {
        ll temp = generateNextPalindrome( besar );
        cout << temp << endl;
    }

    

    return 0;
}
