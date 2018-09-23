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
    int m, x, ans = 0, cur = 1;
    string s;
    stack<int> stek;
    cin>>m;
    map<int, bool> free;
    for (int i = 0; i < m*2; ++i)
    {
        cin>>s;
        if (s == "add")
        {
            cin>>x;
            stek.push(x);
        } else {
            bool cek;
            if (stek.empty())
            {
                cek = false;
            } else {
                cek = !free[stek.top()];
            }
            if ((!free[cur] || cek) && !stek.empty())
            {
                if (stek.top() == cur)
                {
                    stek.pop();
                } else {
                    ans++;
                    while(!stek.empty()){
                        int top = stek.top();
                        free[top] = true;
                        stek.pop();
                    }
                }
            }
            cur++;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}

// Problem Description
// Stack and Remove the Box!
// Time Limit 0.2s
// Memory Limit 64MB
// Description
// Wengki and his best friend, Bim, are playing with some boxes. They will stacking and removing some boxes.
// These boxes are numbered from 1 to M. Initially there are no boxes on the stack.
// Bim suddently went crazy, he gives Wengki 2M commands: M of which are to add a box to the top of stack and
// another M commands to remove a box from the top of stack and throw it to trash. Bim is a perfectionist boy,
// so he wants Wengki to throw the boxes in the order from 1 to M. Of course, sometimes it might me impossible
// for Wengki to perform some of Bim’s remove commands because the required box is not on the top of stack.
// Wengki is a smart boy. When Bim looks away, he can reorder the boxes in the stack in any ways he wants.
// He can do it at any time between Bim’s commands, but of course he can’t add or remove the boxes while he
// reorder the stack.
// Wengki knows that you are the best programmer in ITB. Please help Wengki to tell the minimum number of
// times he needs to reorder the stack so that he can successfully complete all of Bim’s commands.
// It is guaranteed that every box is added before it is required to be removed.
// Input Format
// The first line of input is the integer M denotes the number of boxes.
// Each of the next 2M lines of input starts with string ”add” or ”remove”. If the lines start with ”add”, an
// integer X follows indicating that Wengki needs to add the box with number X to the stack. If the lines start
// with ”remove”, Wengki needs to remove the box on the top of stack.
// Output Format
// Output the minimum number of times Wengki needs to reorder the stack so that he can succesfully complete
// all of Bim’s commands.
// Constraint
// • 1 ≤ M ≤ 105
// • 1 ≤ X ≤ M
// • It’s guaranteed that exactly M lines contains add operations and M lines contains remove operations.
// • It is guaranteed that every box is added before it is required to be removed.

// Sample Input 1
// 3
// add 1
// remove
// add 2
// add 3
// remove
// remove
// 1

// Sample Output 1
// 1

// Sample Input 2
// 4
// add 1
// add 3
// remove
// add 4
// add 2
// remove
// remove
// remove

// Sample Output 2
// 2
