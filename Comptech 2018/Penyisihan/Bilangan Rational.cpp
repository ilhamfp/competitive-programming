/*
Bilangan Rational
Memory Limit: 64 MB
Time Limit: 1000 ms
Bilangan rasional adalah bilangan yang dapat dinyatakan sebagai a/b di mana a, b bilangan bulat dan b
tidak sama dengan 0. di mana batasan dari bilangan rasional adalah mulai dari selanga (-∞, ∞). Satu
properti dari bilangan rasional adalah berakhir setelah jumlah digit yang terbatas atau memiliki digit
desimal berulang (r). 
Contoh Bilangan Rational
100       , a=100 , b=1   , r=(terminates)
-1.875    , a=-15 , b=8   , r=(terminates)
2.1(6)    , a=13  , b=6   , r=6
7.(27)    , a=80  , b=11  , r=27
0.285714  , a=2   , b=7   , r=285714

Angka-angka yang digarisbawahi dalam contoh di atas merepresentasikan digit desimal berulang,
misalnya, 2,16 berarti angka tersebut 2,166666 ..., sedangkan 0,285714 berarti angka adalah
0,285714285714285714285714 ...; 100 dan -1,875 tidak memiliki digit desimal yang berulang saat
diakhiri.
Dalam masalah ini, Anda ditantang untuk mencari panjang digit desimal berulang dari bilangan rasional.
Dalam contoh di atas, ketika a = 13 dan b = 6, maka panjang digit desimal berulangnya adalah 1;
sementara, ketika a = 2 dan b = 7, panjang digit desimal berulangnya adalah 6.

Format Masukan
Baris pertama dari input berisi integer T (T ≤ 100) yang menunjukkan jumlah kasus. Setiap kasus berisi
dua bilangan bulat dalam satu baris: a b (-1.000.000.000 ≤ a, b ≤ 1.000.000.000, b ≠ 0) yang mewakili
pembilang dan penyebut dari bilangan rasional, masing-masing.

Keluaran
Untuk setiap kasus, output adalah panjang dari digit desimal berulang untuk kasus tertentu.

Contoh Masukan
5
100 1
-15 8
13 6
80 11
2 7

Contoh Keluaran
0
0
1
2
6
*/

#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;
typedef unsigned long long ull;

string solve(int a, int b)
{
    string ans;
    map <int, int> jaw;
    jaw.clear();
    int sisa = a%b;
    while ( (sisa!=0) && (jaw.find(sisa) == jaw.end()) )
    {
        jaw[sisa] = ans.length();
 
        sisa = sisa*10;
 
        int res_part = sisa / b;
        ans += to_string(res_part);
 
        sisa = sisa % b;
    }
    if (sisa == 0)
    {
        return "";
    } else {
        return  ans.substr(jaw[sisa]);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<solve(a,b).size()<<endl;
    }
    
    return 0;
}