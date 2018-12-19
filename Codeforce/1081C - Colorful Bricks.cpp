
#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };

long long nCrModpDP(long long n, long long r, long long p) 
{ 
    long long C[r+1]; 
    memset(C, 0, sizeof(C)); 
    C[0] = 1; 
    for (long long i = 1; i <= n; i++) 
    { 
        for (long long j = min(i, r); j > 0; j--) 
            C[j] = (C[j] + C[j-1])%p; 
    } 
    return C[r]; 
} 

long long nCrModpLucas(long long n, long long r, long long p) 
{ 
   
   if (r==0) 
      return 1; 
   long long ni = n%p, ri = r%p; 
   return (nCrModpLucas(n/p, r/p, p) * nCrModpDP(ni, ri, p)) % p;  
} 

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    long long MODULO = 998244353;
    long long n, m, k;
    cin >> n >> m >> k;
    if (k == 0)
    {
        cout << m << endl;
    } else {
        long long hasil = 1;
        long long banyakSegment = k+1;
        long long banyakCaraMemilihWarna = m;
        for (long long i = 1; i < banyakSegment; ++i)
        {
            banyakCaraMemilihWarna = (banyakCaraMemilihWarna * (m-1)) % MODULO;
        }
        long long banyakCaraMemilihSegment = 1;
        cout << (banyakCaraMemilihWarna*nCrModpLucas(n-1,k,MODULO))%MODULO << endl;
    }
    return 0;
}