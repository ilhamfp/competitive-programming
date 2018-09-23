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

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int n,x,y, ans = 0;
    bool diatas = false, dibawah = false;
    map<double,bool> gradKanan, gradKiri;
    cin>>n>>x>>y;
    for (int i = 0; i < n; ++i)
    {
        int px,py;
        cin>>px>>py;
        if (x == px)
        {
            if (py>y)
            {
                if (!diatas)
                {
                    diatas = true;
                    ans++;
                }
            } else {
                if (!dibawah)
                {
                    dibawah = true;
                    ans++;
                }
            }
        } else {
            double gradient = ((double) (py-y)) / ((double) (px-x));
            if (px > x)
            {
                if (!gradKanan[gradient])
                {
                    gradKanan[gradient] = true;
                    ans++;
                }
            } else {
                if (!gradKiri[gradient])
                {
                    gradKiri[gradient] = true;
                    ans++;
                }
            }
        }
    }

    cout<<ans<<endl;
    return 0;
}

// Pohon
// Time limit: 1 s

// Memory limit: 32678 KB

 

// Deskripsi
// Untuk menghilangkan penat Pak Blangkon sering sekali jalan-jalan ke pekarangan di belakang rumahnya. Saat berada di posisi tertentu Pak Blangkon menyadari bahwa di sekelilingnya ada N buah pohon. Namun, karena terbatasnya pandangan hanya beberapa pohon saja yang bisa terlihat oleh Pak Blankon, karena pohon tertentu berada tepat di belakang pohon lainnya saat pandangan tertuju pada arah tertentu. Jika dilihat dari atas dalam koordinat dua dimensi, Pak Blangkon ada di posisi (x,y) sedangkan pohon-pohonnya ada di posisi (pi,qi). Seperti contoh pada gambar di bawah ini:



// Seperti terlihat pada gambar di atas dari 8 pohon, hanya 5 yang bisa dilihat secara langsung oleh Pak Blangkon, sedangkan tiga pohon lainnya terhalang oleh pohon di depannya. Jika diketahui lokasi Pak Blangkon beserta N buah pohon, buatlah program untuk menghitung banyaknya pohon yang bisa terlihat secara langsung oleh Pak Blangkon.

// Format Masukan
// Baris pertama adalah N, X dan Y yang menyatakan banyaknya pohon dan posisi Pak Blangkon di mana 2 ≤ N ≤ 100. N baris berikutnya berisi pi dan qi yang menyatakan posisi pohon ke-i, di mana 0 ≤ X,Y,pi,qi ≤ 1000.

// Format Keluaran
// Banyaknya pohon yang dapat dilihat Pak Blangkon.

// Contoh Masukan
// 8 4 2
// 1 5
// 2 1
// 2 4
// 3 3
// 6 3
// 6 6
// 7 7
// 10 5
// Contoh Keluaran
// 5