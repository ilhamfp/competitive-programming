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
    // Surabaya Town Square
    // TC
    // 2
    // 5
    // 2 8 1 5 7
    // 4
    // 2 8 1 5
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    ll n, k;
    cin >> n >> k;
    int tab[11][11];
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            tab[i][j] = j+((i-1)*n);
        }
    }

    // for (int i = 0; i < 5; ++i)
    // {
    //     for (int j = 1; j <= n; ++j)
    //     {
    //         for (int k = 1; k <= n; ++k)
    //         {
    //             cout<<tab[j][k]<<" ";
    //         }
    //         cout<<endl;
    //     }

    // }
    int hasilke=0;
    int counter = 0;
    int counterMax = n*n - n-n;
    int angkaSwap1 = 1;
    int angkaSwap2 = n+1+n;
    int hitungPermutasi = 1;
    for (int i = 0; i < k; ++i)
    {
        hasilke++;
        counter++;
        //Swap

        // Keluarin Hasil
        for (int j = 1; j <= n; ++j)
        {
            for (int k = 1; k <= n; ++k)
            {
                if (tab[j][k]==angkaSwap1)
                {
                    cout<<angkaSwap2<<" ";
                } else if (tab[j][k]==angkaSwap2)
                {
                    cout<<angkaSwap1<<" ";
                } else {
                    cout<<tab[j][k]<<" ";
                }
                
            }
            cout<<endl;
        }

        //Tambah
        angkaSwap2++;
        //Reset Counter
        if (counter == counterMax)
        {
            counter = 0;
            angkaSwap2 = n+1+n;
            angkaSwap1++;
            if (angkaSwap1 == n)
            {
                angkaSwap1 = 1;
                vector<int> v;
                for (int l = 1; l <= n; ++l)
                {
                    v.pb(tab[1][l]);
                }
                next_permutation(v.begin(), v.end()-1);
                for (int l = 0; l < n; ++l)
                {
                    tab[1][l+1] = v[l];
                }
            }
            
        }

        if (hasilke%1000 == 0)
        {
            vector<int> v;
            for (int l = 1; l <= n; ++l)
            {
                v.pb(tab[2][l]);
            }
            next_permutation(v.begin(), v.end()-1);
            for (int l = 0; l < n; ++l)
            {
                tab[2][l+1] = v[l];
            }

            // for (int l = 1; l <= n; ++l)
            // {
            //     tab[1][l] = l;
            // }
            // hitungPermutasi++;
            // vector<int> temp;
            // for (int l = 0; l < n; ++l)
            // {
            //     temp.pb(tab[1][l+1]);
            // }
            // for (int l = 0; l < n; ++l)
            // {
            //     tab[1][l+1] = tab[2][l+1];
            // }
            // for (int l = 0; l < n; ++l)
            // {
            //     tab[2][l+1] = temp[l];
            // }
            
        }
    }

    

    return 0;
}