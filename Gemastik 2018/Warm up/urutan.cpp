#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };

bool cmp (int i,int j) { return (i>j); }

bool cmpAneh (int i,int j) { 
    string sa, sb;
    sa = to_string(i);
    sb = to_string(j);
    reverse(sa.begin(), sa.end());
    reverse(sb.begin(), sb.end());
    return sa < sb;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int n, x;
    vector<int> v;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>x;
        v.pb(x);
    }

    sort(v.begin(), v.end(), cmpAneh);

    int count = 0;
    while(count<n){
        cout<<v[count]<<endl;
        count++;
    }
    return 0;
}

// Urutan Aneh
// Time limit: 1 s

// Memory limit: 16 MB

// Deskripsi
// Buatlah program yang melakukan pengurutan N (2≤N≤1000) buah bilangan seperti pada contoh kasus di bawah ini.

// Format Masukan
// Baris pertama berisi satu buah bilangan N. Baris kedua berisi N buah bilangan bulat Xi. Setiap bilangan dipastikan hanya antara 0-100.

// Format Keluaran
// N buah baris berisi urutan bilangan sesuai dengan contoh

// Contoh Masukan
// 10
// 1 11 12 2 13 23 31 62 71 81
// Contoh Keluaran
// 1
// 11
// 31
// 71
// 81
// 2
// 12
// 62
// 13
// 23