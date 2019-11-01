#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> answer;

        if (x <= arr[0])
        {
            for (int i = 0; i < k; ++i)
            {
                answer.push_back(arr[i]);
            }
            return answer;
        } else if (x >= arr[arr.size()-1])
        {
            for (int i = arr.size()-k; i < arr.size(); ++i)
            {
                answer.push_back(arr[i]);
            }
            return answer;
        }

        int low = 0, high = arr.size();
        while (low < high){
            int mid = low + (high-low)/2;

            if (arr[mid] == x){
                break;
            } else if (arr[mid] > x) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        int index = low;
        low = max(0, index-k);
        high = min((int)arr.size()-1, index+k+1);
        while(high - low + 1> k){
            if (x - arr[low] > arr[high] - x)
            {
                low++;
            } else {
                high--;
            }
        }

        for (int i = low; i <= high; ++i)
        {
            answer.push_back(arr[i]);
        }
        return answer;
    }
};

int main() {
  Solution sol;
  vector<int> v1 = {1,2,3,4,5};
  vector<int> v2 = {1,2,3,4,5};
  vector<int> v3= {0,0,1,2,3,3,4,7,7,8};
  for(auto x: sol.findClosestElements(v1, 4, 3)){
    cout << x;
  }
  cout << endl;
  for(auto x: sol.findClosestElements(v2, 4, -1)){
    cout << x;
  }
  cout << endl;
  for(auto x: sol.findClosestElements(v3, 3, 5)){
    cout << x;
  }
  cout << endl;
  return 0;
}
