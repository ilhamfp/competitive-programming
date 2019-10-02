#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        map<int, int> indices;
        map<int, bool> visited;
        for(int i = 0; i < nums.size(); i++){
            int comp = target-nums[i];
            if (visited[comp]){
                ans.push_back(indices[comp]);
                ans.push_back(i);
                break;
            } else {
                visited[nums[i]] = true;
                indices[nums[i]] = i;
            }
        }
        return ans;
    }
};

int main() {
 	Solution sol;
	return 0;
}