/*

ARTOFPOLINDROME
Memory Limit : 32 MB
Time Limit : 3 s
Artofpolindrome merepresentasikan sebuah keajaiban yang dapat terjadi pada polindrome
sebuah kalimat . Dimana bila kalimat tersebut disusun pada tabel G x G,maka kalimat aslinya
dapat dibaca dengan empat cara yang berbeda:
- Cell (1,1) dibaca ke kanan hingga akhir dari baris tersebut
- Cell (1,1) dibaca ke bawah hingga akhir dari baris tersebut
- Cell (G,G) dibaca ke atas hingga akhir dari baris tersebut
- Cell (G,G) dibaca ke kiri hingga akhir dari baris tersebut
“sator arepo tenet opera rotas” merupakan contoh nya,membentuk tabel 5 x 5 ,

s a t o r
a r e p o
t e n e t
o p e r a
r o t a s

Input
Baris pertama adalah masukkan integer C yang merupakan jumlah kasus uji (1 ≤ C ≤ 100 ) ,
lalu diikuti C baris masukkan kalimat L dimana panjang L < 10.000.
(Kalimat dapat mengandung huruf [a..z] , tanda koma, titik, kurung, spasi, dan beberapa tanda
baca lainnya) tetapi Artofpalindrome akan mengabaikan semua spasi dan tanda baca yang
terdapat pada kalimat.

Output
Untuk setiap kasus uji , bila L merupakan Artofpolindrome munculkan dimensi tabel yang
terbentuk , dan bila bukan merupakan Artofpolindrome akan menampilkan “seriously?”

Sample Input
3
sator arepo tenet opera rotas
Lakaad Matataaag Normalin Normalin
s!at?or ar,epo t)enet ope()ra ro!!!!tas???

Sample Output
5
seriously?
5
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
    string temp;
    getline(cin,temp);
    while(t--){
        string s;
        getline(cin,s);
        string clean = "";
        for (int i = 0; i < s.size(); ++i)
        {
            if ((s[i]>= 97 && s[i]<=122) || (s[i]>=65 && s[i]<=90))
            {
                clean+=s[i];
            }
        }
        // cout<<clean<<endl;
        // 5
        // 0 1 2 3 4
        // 6
        // 0 1 2 3 4 5
        bool bisa = true;
        for (int i = 0; i <= ceil((double)clean.size()/2.0)-1; ++i)
        {
            if (clean[i] != clean[clean.size()-i-1])
            {
                bisa=false;
                break;
            }
        }
        if (bisa)
        {
            cout<<sqrt(clean.size())<<endl;
        } else {
            cout<<"seriously?"<<endl;
        }
    }
    
    return 0;
}