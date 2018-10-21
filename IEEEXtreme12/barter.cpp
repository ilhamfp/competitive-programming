#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;
long long const MODULO = 998244353;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };
unordered_map<string, unordered_map<string, ll >> arr;
unordered_map<string,string> asal;

ll modInverse(ll a, ll m) 
{ 
    ll m0 = m; 
    ll y = 0, x = 1; 
  
    if (m == 1) 
      return 0; 
  
    while (a > 1) 
    { 
        // q is quotient 
        ll q = a / m; 
        ll t = m; 
  
        // m is remainder now, process same as 
        // Euclid's algo 
        m = a % m, a = t; 
        t = y; 
  
        // Update y and x 
        y = x - q * y; 
        x = t; 
    } 
  
    // Make x positive 
    if (x < 0) 
       x += m0; 
  
    return x; 
} 

string root(string s1){
    if (asal[s1] == s1 )
    {
        return s1;
    } else if (asal[s1] == ""){
        asal[s1] = s1;
        return s1;
    }else {
        asal[s1] = root(asal[s1]);
        return asal[s1];
    }
}



ll find(string s1, string s2){
    string rootS1 = root(s1);
    string rootS2 = root(s2);
    if (rootS1 != rootS2)
    {
        return -1;
    } else {
        return (arr[s1][rootS1]*arr[rootS1][s2])%MODULO;
    }
}

void rootUpdate(string s1, ll cost, string root){
    for (auto iter : arr[s1]) {
        string tujuan = iter.first;
        arr[tujuan][root] = (arr[tujuan][s1]*cost)%MODULO;
        arr[root][tujuan] = modInverse(arr[tujuan][root], 998244353);
    }
}

void Union(string s1, string s2){
    string rootS1 = root(s1);
    string rootS2 = root(s2);
    asal[rootS2] = rootS1;
    // cout<<"root1: "<<rootS1<<endl;
    // cout<<"root2: "<<rootS2<<endl;
    ll costRootS2KeRootS1 = (arr[rootS2][s2]*( ( arr[s2][s1]*arr[s1][rootS1] )%MODULO ))%MODULO;
    arr[rootS2][rootS1] = costRootS2KeRootS1;
    arr[rootS1][rootS2] = modInverse(costRootS2KeRootS1, 998244353);
    // cout<<"cost2: "<<costRootS2KeRootS1<<endl;
    rootUpdate(rootS2, costRootS2KeRootS1, rootS1);
}


int main()
{
    ll n, q, d;
    cin >> n;
    string a, b;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> d;
        arr[a][b] = d;
        arr[b][a] = modInverse(d, 998244353);
        arr[a][a] = 1;
        arr[b][b] = 1;
        Union(a, b);
    }

    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> a >> b;
        if (a==b)
        {
            cout << 1 << endl;
        } else {
            cout << find(a,b) << endl;
        }
    }

    return 0;
}