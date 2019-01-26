#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int n;
    map<int, char> mappingAngka;
    map<char, int> mappingKarakter;
    string input;

    //     mappingKarakter['R'] = 0;
    // mappingKarakter['G'] = 1;
    // mappingKarakter['B'] = 2;

    cin >> n;
    cin >> input;

    int banyak = 200007;
    string jawaban = "";
    int tempBanyak = 0;
    string tempJawaban = "";
    // RGB
    mappingAngka[0] = 'R';
    mappingAngka[1] = 'G';
    mappingAngka[2] = 'B';


    for (int i = 0; i < input.size(); ++i)
    {
        if (input[i] != mappingAngka[i%3])
        {
            tempBanyak++;
            tempJawaban += mappingAngka[i%3];
        } else {
            tempJawaban += input[i];
        }
    }

    if (tempBanyak <= banyak)
    {
        banyak = tempBanyak;
        jawaban = tempJawaban;
    }
    tempBanyak = 0;
    tempJawaban = "";

    // RBG
    mappingAngka[0] = 'R';
    mappingAngka[1] = 'B';
    mappingAngka[2] = 'G';


    for (int i = 0; i < input.size(); ++i)
    {
        if (input[i] != mappingAngka[i%3])
        {
            tempBanyak++;
            tempJawaban += mappingAngka[i%3];
        } else {
            tempJawaban += input[i];
        }
    }

    if (tempBanyak <= banyak)
    {
        banyak = tempBanyak;
        jawaban = tempJawaban;
    }
    tempBanyak = 0;
    tempJawaban = "";

    // GBR
    mappingAngka[0] = 'G';
    mappingAngka[1] = 'B';
    mappingAngka[2] = 'R';


    for (int i = 0; i < input.size(); ++i)
    {
        if (input[i] != mappingAngka[i%3])
        {
            tempBanyak++;
            tempJawaban += mappingAngka[i%3];
        } else {
            tempJawaban += input[i];
        }
    }

    if (tempBanyak <= banyak)
    {
        banyak = tempBanyak;
        jawaban = tempJawaban;
    }
    tempBanyak = 0;
    tempJawaban = "";

    // GRB
    mappingAngka[0] = 'G';
    mappingAngka[1] = 'R';
    mappingAngka[2] = 'B';


    for (int i = 0; i < input.size(); ++i)
    {
        if (input[i] != mappingAngka[i%3])
        {
            tempBanyak++;
            tempJawaban += mappingAngka[i%3];
        } else {
            tempJawaban += input[i];
        }
    }

    if (tempBanyak <= banyak)
    {
        banyak = tempBanyak;
        jawaban = tempJawaban;
    }
    tempBanyak = 0;
    tempJawaban = "";

    // BRG
    mappingAngka[0] = 'B';
    mappingAngka[1] = 'R';
    mappingAngka[2] = 'G';


    for (int i = 0; i < input.size(); ++i)
    {
        if (input[i] != mappingAngka[i%3])
        {
            tempBanyak++;
            tempJawaban += mappingAngka[i%3];
        } else {
            tempJawaban += input[i];
        }
    }

    if (tempBanyak <= banyak)
    {
        banyak = tempBanyak;
        jawaban = tempJawaban;
    }
    tempBanyak = 0;
    tempJawaban = "";

    // BGR
    mappingAngka[0] = 'B';
    mappingAngka[1] = 'G';
    mappingAngka[2] = 'R';


    for (int i = 0; i < input.size(); ++i)
    {
        if (input[i] != mappingAngka[i%3])
        {
            tempBanyak++;
            tempJawaban += mappingAngka[i%3];
        } else {
            tempJawaban += input[i];
        }
    }

    if (tempBanyak <= banyak)
    {
        banyak = tempBanyak;
        jawaban = tempJawaban;
    }
    tempBanyak = 0;
    tempJawaban = "";

    cout << banyak << endl;
    cout << jawaban << endl;

    return 0;
}



