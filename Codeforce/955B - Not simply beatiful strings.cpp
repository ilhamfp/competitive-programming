#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define fi first
#define se second   
#define pii pair< int , int >
#define pll pair< long , long >
#define pi acos(-1.0)
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define MOD 10e9+7
#define line puts("")
#define INF_INT -2147483647

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 
using namespace std;



pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };

string s;
map<char, int> m;

int main() {
    cin>>s;
    bool bisa = false;
    
    for (int i = 0; i < s.size(); ++i)
    {
        m[s[i]]++;
    }

    int banyakChar = 0;
    bool adaDua = false;
    for (auto p : m)
    {
        banyakChar++;
        if (p.second>1)
        {
            adaDua = true;
        }
    }

    if (banyakChar == 4)
    {
        bisa = true;
    } else if (banyakChar == 3 && adaDua) {
        bisa = true;
    } else if(banyakChar == 2){
        bisa = true;
        for (auto p : m)
        {
            if (p.second==1)
            {
                bisa = false;
                break;
            }
        }
    }

    if (bisa)
    {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}