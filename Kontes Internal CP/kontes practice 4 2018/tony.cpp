// The Legend of Tony
// Time Limit 2s
// Memory Limit 256MB
// Description
// There exist a person named Tony, who claimed that he is the strongest of all men in the entire world. To prove
// that he is the strongest man, he wants to show to everybody his strength in climbing a vertical ladder. But the
// ladder can be not perfectly shaped, that is, there are only N steps in the ladder that Tony can hold. Let Ai
// is
// the height of step i in the ladder. Tony’s goal is to reach AN . Here is some rule:
// 1. Tony has initial strength S
// 2. Tony can make a jump with height up to his current strength.
// 3. Each time Tony make a jump with height same to his current strength, his current strength will be
// decreased by 1.
// But Tony wants to reserve his energy because he wants to solve more competitive programming problems after
// climbing the ladder, so that he wants to go to AN with minimum S. You as his best friend wants to help Tony
// achieve his goal, help him!
// Input Format
// The first line contains a number N denoting the number of steps in ladder, then the next lines contains N
// numbers denoting the height of steps in ladder.
// Output Format
// A number that is the answer to the problem.
// Constraint
// • 1 ≤ N ≤ 106
// • 1 ≤ Ai ≤ 109
// • 1 ≤ A1 < A2 < ... < AN ≤ 109
// Sample Input 1
// 5
// 1 6 7 11 13
// Sample Output 1
// 5
// Sample Input 2
// 4
// 3 9 10 14
// Sample Output 2
// 6

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
    int n;
    cin>>n;
    vector<int> tab;
    vector<int> tab2;
    int maks = 0, indeks = -1;
    tab.pb(0);
    tab2.pb(0);
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin>>x;
        tab.pb(x);
        tab2.pb(x);
        tab[i+1]-=tab2[i];
        if (tab[i+1]>=maks)
        {
            maks = tab[i+1];
            indeks = i+1;
        }
    }

    int cur = maks;
    for (int i = indeks; i < n; ++i)
    {
        if (tab[i]==cur)
        {
            cur--;
        } else if (tab[i]>cur){
            cout<<maks+1<<endl;
            return 0;
        }
    }

    cout<<maks<<endl;

    return 0;
}