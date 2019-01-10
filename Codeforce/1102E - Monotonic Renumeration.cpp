#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };

const int md = 998244353;

inline void add(int &a, int b) {
  a += b;
  if (a >= md) a -= md;
}

inline void sub(int &a, int b) {
  a -= b;
  if (a < 0) a += md;
}

inline int mul(int a, int b) {
  return (int) ((long long) a * b % md);
}

inline int power(int a, long long b) {
  int res = 1;
  while (b > 0) {
    if (b & 1) {
      res = mul(res, a);
    }
    a = mul(a, a);
    b >>= 1;
  }
  return res;
}

int main()
{

    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int n, x;
    int arr[200005];
    memset(arr, 0, sizeof(arr));
    int kawan[200005];
    memset(kawan, 0, sizeof(kawan));
    map<int, int> indexPertama;

    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> arr[i];
        if (indexPertama[arr[i]] == 0)
        {
            indexPertama[arr[i]] = i;
        } else {
            kawan[i] = indexPertama[arr[i]];
            kawan[indexPertama[arr[i]]] = i;
        }
    }

    memset(arr, 0, sizeof(arr));
    
    int counter = 1;
    int counterarr = 1;
    while(counter <= n){
        if (kawan[counter] > counter)
        {
            if (arr[counter] == 0)
            {
                arr[counter] = counterarr;
                counterarr++;
            }
            int akhir = kawan[counter];
            for (int i = counter; i <= akhir; ++i)
            {
                arr[i] = arr[counter];
                akhir = max(akhir, kawan[i]);
            }
            counter = akhir+1;
        } else if (kawan[counter] == 0)
        {
            if (arr[counter] == 0)
            {
                arr[counter] = counterarr;
                counterarr++;
            }
            counter++;
        }
    }

    unordered_set<int> s(arr, arr + n +1);

    cout << power(2,s.size()-2) << endl;
    
    return 0;
}


// 0,0,0,0
// 0,0,0,1
// 0,1,1,1
// 0,1,1,2

// 0,0,0,0
// 0,0,0,1
// 0,0,1,1
// 0,0,1,2
// 0,1,1,1
// 0,1,1,2
// 0,1,2,2
// 0,1,2,3


// 1 = 1
// 2 = 2
// 3 = 4
// 4 = 8
// 2^(n-1)