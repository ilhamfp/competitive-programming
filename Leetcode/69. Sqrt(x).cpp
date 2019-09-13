#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
    
        int low = 1, high = 46340;
        while (high >= low ){
            int mid = low + (high - low) / 2; 
            // cout << mid << endl;
            int val = mid*mid;
            
            if (val == x){
                return mid;
            } else if (val < x){
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        if ((long long)low*low <= (long long)x)
        {
        	return low;
        } else {
        	return low - 1;
        }
    }
};

int main() {
 	Solution sol;
 	cout << sol.mySqrt(2147483647) << endl;
	return 0;
}