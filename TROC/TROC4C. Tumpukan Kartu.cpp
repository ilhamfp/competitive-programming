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
    // 1.0, 1.5, 2.0 , 2.5, 3.5
    // 1/1, 3/2, 12/6, 60/24, 360/120, 2520/720

    // vector<int> v = {1,2,3,4,5,6};
    // int total = 0;
    // do {
    //     map<int, bool> seen;
    //     for (int i = 0; i < v.size(); ++i)
    //     {
    //         cout << v[i] << " ";
    //     }
    //     int temp = 0;
    //     for (int i = 0; i < v.size(); ++i)
    //     {
    //         if (seen[v[i]-1])
    //         {
    //             seen[v[i]-1] = false;
    //             seen[v[i]] = true;
    //         } else {
    //             seen[v[i]] = true;
    //             temp++;
    //         }
    //     }
    //     cout << " = " << temp;
    //     total += temp;
    //     cout << endl;
    // } while ( std::next_permutation(v.begin(), v.end()) );
    // cout << "total = " << total;
    int n;
    cin >> n;
    cout << 1.0+((double)(n-1)*0.5) << endl;
    return 0;
}


