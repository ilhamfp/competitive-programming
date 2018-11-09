#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };

bool cmp (int i,int j) {
    string test1 = to_string(i) + to_string(j);
    string test2 = to_string(j) + to_string(i);
    long long jaw1 = stoll(test1);
    long long jaw2 = stoll(test2);
    return (jaw1 > jaw2); 
}

string largestNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end(), cmp);
    if (nums[0] == 0)
    {
        return "0";
    } else {
        string jaw = "";
        for (int i = 0; i < nums.size(); ++i)
        {
            jaw += to_string(nums[i]);
        }
        return jaw;
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    vector<int> tc1 = {10, 2};
    cout << largestNumber(tc1) << endl;

    vector<int> tc2 = {3, 30, 34, 5, 9};
    cout << largestNumber(tc2) << endl;

    vector<int> tc3 = {0, 0};
    cout << largestNumber(tc3) << endl;
}