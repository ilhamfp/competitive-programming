#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupStrings(vector<string>& strings) {
        map<string, vector<string>> mapAnswer;
        vector<vector<string>> answer;
        
        for(int i=0; i<strings.size(); ++i){
            // cout << "Current strings: " << strings[i] << endl;
            string key = "";
            
            for(int j=1; j<strings[i].size(); ++j){
                int curDiff = (strings[i][j]-strings[i][j-1]+26)%26;
                // cout << "curDiff "<< curDiff << endl;
                key += ";"+ to_string(curDiff);
                // cout << "kunci "<< key << endl;
            }
            
            mapAnswer[key].push_back(strings[i]);
        }

        for(auto vecStrings: mapAnswer){
            // cout << "Group key: " << vecStrings.first << endl;
            answer.push_back(vecStrings.second);
        }
        return answer;
    }
};

int main() {
  // cout << ((int)'a'+26)-'y' << endl;
  // cout << (int)'y' << endl;
  Solution sol;
  vector<string> v1 = {"abc", "bcd", "acef", "xyz", "az", "ba", "a", "z", "ay", "bz", "ca"};
  for(auto x: sol.groupStrings(v1)){
    cout << "group: ";
    for(auto y: x){
      cout << y << " ";
    }
    cout << endl;
  }
  return 0;
}
