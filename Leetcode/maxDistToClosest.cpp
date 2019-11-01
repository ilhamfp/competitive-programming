#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
    	int answer = -1;
    	int arrFront[seats.size()];
    	int arrEnd[seats.size()];

    	// Calculate arr front
    	int lastSeatIndex = -50000;
    	for (int i = 0; i < seats.size(); ++i)
    	{
    		if (seats[i] == 1)
    		{
	    		arrFront[i] = 0;
	    		lastSeatIndex = i;
    		} else {
    			arrFront[i] = i-lastSeatIndex;
    		}
    	}

    	lastSeatIndex = 50000;
    	for (int i = seats.size()-1; i >= 0; --i)
    	{
    		if (seats[i] == 1)
    		{
	    		arrEnd[i] = 0;
	    		lastSeatIndex = i;
    		} else {
    			arrEnd[i] = lastSeatIndex-i;
    		}
    	}
        
        for (int i = 0; i < seats.size(); ++i)
        {
        	int cur = min(arrFront[i], arrEnd[i]);
        	answer = max(answer, cur);
        }

        return answer;
    }
};

int main() {
    Solution sol;
    vector<int> v1 = {1,0,0,0,1,0,1};
    cout << sol.maxDistToClosest(v1) << endl;

    vector<int> v2 = {1,0,0,0};
    cout << sol.maxDistToClosest(v2) << endl;

    
  return 0;
}

