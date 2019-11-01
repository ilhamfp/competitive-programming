#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        pair<int, int>move[4] = { {0,1}, {0,-1}, {1,0}, {-1,0}};
        int answer = 0;

        for(int r=0; r<grid.size(); r++){
            for (int c = 0; c<grid[0].size(); ++c)
            {
                if (grid[r][c]=='1')
                {
                    queue<pair<int,int>> q;
                    grid[r][c]='0';
                    q.push({r,c});
                    // cout << "answer: " << r << " " << c << endl;
                    answer++;

                    while(!q.empty()){
                        auto cur = q.front();
                        q.pop();
                        // cout << "visit: " << cur.first << " " << cur.second << endl;

                        for(auto curMove: move){
                            int newR = cur.first + curMove.first;
                            int newC = cur.second + curMove.second;
                            // cout << "neighbour: " << newR << " " << newC << endl;

                            if (newR>=0 && newR<grid.size() && newC>=0 && newC<grid[0].size() && grid[newR][newC]=='1')
                            {
                                grid[newR][newC]='0';
                                q.push({newR,newC});
                            }
                        }

                    }
                }
            }
        }
        

        return answer;
    }
};

int main() {
  // cout << ((int)'a'+26)-'y' << endl;
  // cout << (int)'y' << endl;
  Solution sol;
  vector<vector<char>> v1;
  v1.push_back({'1','1','1','1','0'});
  v1.push_back({'1','1','0','1','0'});
  v1.push_back({'1','1','0','0','0'});
  v1.push_back({'0','0','0','0','0'});
  cout << sol.numIslands(v1) << endl;
  return 0;
}
