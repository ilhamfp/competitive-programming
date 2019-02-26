#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };


int slidingWindow(vector<int> arr, int k) 
{ 
    int sum = 0; 
    for (int i=0; i<k; i++){
       sum += arr[i]; 
    }
  
    int window_sum = sum; 
    for (int i=k; i<arr.size(); i++) 
    { 
       window_sum += arr[i] - arr[i-k]; 
       sum = max(sum, window_sum); 
    } 
  
    return sum; 
} 

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> v;
        for (int j = 0; j < s.size(); ++j)
        {
            v.pb(s[j]-'0');
        }

        cout << "Case #" << i << ": " << slidingWindow(v, (s.size()+1)/2) << endl;
    }
    return 0;
}


