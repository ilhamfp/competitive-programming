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
    string s;
    cin >> s;
    int arr[1010];
    int jawaban[1010];
    memset(jawaban, 0, sizeof(jawaban));
    int minimum = LONG_MAX;
    int minimumIndex = -2;
    for (int i = 0; i < s.size(); ++i)
    {
        arr[i+1] = s[i]-'a';
        if (arr[i+1] <= minimum)
        {
            minimum = arr[i+1];
            int minimumIndexSebelumnya = minimumIndex;
            minimumIndex = i+1;
            if (minimumIndexSebelumnya == i)
            {
                jawaban[minimumIndexSebelumnya] = 0;
                jawaban[minimumIndex] = 1;
            } else {
                jawaban[minimumIndex] = 1;
                jawaban[minimumIndex-1] = 1;
            }
        }
    }

    for (int i = 0; i < s.size(); ++i)
    {
        cout << jawaban[i+1];
        if (i != s.size() - 1 )
        {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}