#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };
bool debug = true;
int n, m, x, y, t;
vector< pair <int,int> > v;
map<int, bool> taken;
map<int, int> kawan;
map<int, bool> punyaKawan;
int banyakKawanDiambil = 0;


bool cmp(pair<int,int> player1, pair<int,int> player2){
    return player1.first < player2.first;
}

int cariNilaiKawan(int nomor){
    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i].second == nomor)
        {
            return v[i].first;
        }
    }
}

void hilangkan(int nomor){
    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i].second == nomor)
        {
            v.erase(v.begin()+i);
            break;
        }
    }
}

int findBest(){
    if (banyakKawanDiambil != 2*m)
    {
        banyakKawanDiambil++;
        for (int i = v.size()-1; i >= 0; --i)
        {
            if (punyaKawan[v[i].second])
            {
                int output = v[i].second;
                taken[output] = true;
                hilangkan(output);
                return output;
            }
        }

    } else {
        int output = v[v.size()-1].second;
        taken[output] = true;
        hilangkan(output);
        return output;   
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);

    cin >> n >> m;
    for (int i = 1; i <= 2*n; ++i)
    {
        cin >> x;
        v.pb(mp(x,i));
    }
    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < m; ++i)
    {
        cin >> x >> y;
        kawan[x] = y;
        kawan[y] = x;
        punyaKawan[x] = true;
        punyaKawan[y] = true;
    }

    int counter = 0;
    int input;

    cin >> t;
    if (t==1)
    {
        counter++;
        cout << findBest() << endl;
        cout.flush();
    }

    while(counter<2*n){
        counter++;
        // input;
        cin >> input;
        if (input == -1)
        {
            return 0;
        } else {
            taken[input] = true;
            hilangkan(input);

            if (counter<2*n)
            {
                counter++;
                // output
                if (punyaKawan[input])
                {
                    banyakKawanDiambil++;
                    if (!taken[kawan[input]])
                    {
                        cout << kawan[input] << endl;
                        cout.flush();
                        taken[kawan[input]] = true;
                        hilangkan(kawan[input]);
                        banyakKawanDiambil++;
                    } else {
                        cout << findBest() << endl;
                        cout.flush();
                    }
                } else {
                    cout << findBest() << endl;
                    cout.flush();
                }
            }
        }
    }
    return 0;
}