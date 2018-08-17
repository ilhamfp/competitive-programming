/*
Suatu hari Beibi mau mandi, Beibi baru saja membeli 2 buah ember air baru yang
masing masing dapat menampung sebanyak N dan M liter air.
Sebelum dia mandi, dia harus mengisi bak mandi yang bisa menampung sebanyak L liter air.
Beibi harus pergi ke sungai terdekat untuk mengambil air, kemudian kembali mengisi bak
mandinya. Beibi harus mengisi bak mandinya persis L liter dan tidak boleh lebih dari itu (air
akan tumpah), jika air tumpah, maka itu akan merusak listrik di satu desa.
Beibi akan mengisi bak mandi dengan menggunakan ember barunya. Setiap ember akan terisi
penuh, lalu dia akan menuangkan semua air ke dalam bak mandi. Cari tahu apakah Beibi dapat
mengisi bak mandi dengan L liter air jika dia memiliki 2 ember . Beibi dapat menggunakan
satu atau kedua ember tersebut.
Input
Baris pertama terdiri dari integer T (T ≤ 100) mewakili jumlah kasus uji.
Setiap test case terdiri dari 3 bilangan bulat N, M, dan L (1 ≤ N, M ≤ 100; 1 ≤ L ≤ 100) seperti
yang dijelaskan dalam deskripsi masalah.
Output
Untuk setiap test case, cetak “BISA” bila bak air mandi dapat terisi penuh, dan “GAK” bila bak
air mandi tidak dapat terisi penuh.
Sampel Input 
3
1 6 10
4 7 25
20 40 70
Sampel Output
BISA
BISA
GAK 
*/

#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;
typedef unsigned long long ull;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,l[2];
        cin>>n>>m>>l[0];
        l[1] = l[0];
        bool done = false;
        while(l[1] >=0  && l[0] >=0 ){
            if (l[0]>=0 && l[0]%n == 0)
            {
                cout<<"BISA"<<endl;
                done = true;
                break;
            } else if(l[1]>=0 && l[1]%m == 0){
                cout<<"BISA"<<endl;
                done = true;
                break;
            }
            l[0]-=m;
            l[1]-=n;
        }
        if (!done)
        {
            cout<<"GAK"<<endl;
        }
    }
    return 0;
}
