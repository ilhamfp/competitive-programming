#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthLongestPath(string input) {
        int answer = 0;
        int depth = -1;
        int depthArr[100000];
        
        int it = 0;
        while (it < input.size()){
            bool isFile = false;
            int inner_it = it;
            int curDepth = 0;
            
            if (input[inner_it] == '\n') inner_it += 1;
            
            while (input[inner_it] == '\t'){
                curDepth++;
                inner_it += 1;
            }
            
            int old_inner_it = inner_it;
            // printf("oldInnerIt:%d\n", old_inner_it);
            while (inner_it+1 < input.size() && input[inner_it+1] != '\n'){
                   if (input[inner_it] == '.') isFile = true;
                   
                   inner_it++;
                   
            }
            int curLenDir = inner_it - old_inner_it + 1;
            // printf("curDepth:%d curLenDir:%d\n", curDepth, curLenDir);
            if (curDepth == 0) {
                depth = 0;
                depthArr[0] = curLenDir;
            } else {
                if (curDepth > depth){
                    depthArr[curDepth] = depthArr[depth] + curLenDir;
                    depth = curDepth;
                } else if (curDepth == depth){
                    depthArr[curDepth] = depthArr[depth-1] + curLenDir;
                } else {
                    depthArr[curDepth] = depthArr[curDepth-1] + curLenDir;
                    depth = curDepth;
                }
            }
                   
            if (isFile) answer = max(answer, depthArr[curDepth]+curDepth);
            it = inner_it + 1;
        }
        
        
        return answer;
    }
};

int main() {
  Solution sol;
  string s1 = "dir\n\tsubdir1\n\tsubdir2\n\t\tfile.ext";
  string s2 = "dir\n\tsubdir1\n\t\tfile1.ext\n\t\tsubsubdir1\n\tsubdir2\n\t\tsubsubdir2\n\t\t\tfile2.ext";
  cout << sol.lengthLongestPath(s1) << endl;
  cout << sol.lengthLongestPath(s2) << endl;
  return 0;
}
