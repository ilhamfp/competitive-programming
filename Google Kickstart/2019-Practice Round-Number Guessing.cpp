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
    string correct = "CORRECT", smaller = "TOO_SMALL", bigger = "TOO_BIG", wrong = "WRONG_ANSWER";
    int t;
    cin >> t;
    while(t--){
        int a, b, n, mid;
        string ans;
        cin >> a >> b >> n;
        a++;
        do{
            mid = a+((b-a)/2);
            // printf("A:%d B:%d\n", a, b);
            cout << mid << endl;
            cout << flush;
            cin >> ans;
            if (ans == smaller)
            {
                a = mid+1;
            } else if (ans == bigger){
                b = mid-1;
            }
        }while(ans!=correct);
    }
    return 0;
}


