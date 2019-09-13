#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> gardenNoAdj(int N, vector<vector<int>>& paths) {
        vector<int> g[N+1];
        
        for(int i = 0; i < paths.size(); i++){
            vector<int> cur = paths[i];
            g[cur[0]].push_back(cur[1]);
            g[cur[1]].push_back(cur[0]);
        }
        
        // simple BFS
        queue<int> q;
        bool visited[N+1];
        int types[N+1];
        memset(visited, false, sizeof(visited));
        memset(types, 0, sizeof(types));

        for(int i = 1; i <= N; i++){
            if (!visited[i]){
                q.push(i);
                visited[i] = true;

                while (!q.empty()){
                    bool isOk[4] = {true, true, true, true};
                    int curNode = q.front();
                    q.pop();

                    // check every neighbour

                    for(int i = 0; i < g[curNode].size(); i++){
                        int curNeighbour = g[curNode][i];

                        if (visited[curNeighbour] && (types[curNeighbour]-1 != -1)){
                            isOk[types[curNeighbour]-1] = false;
                        } else {
                            q.push(curNeighbour);
                            visited[curNeighbour] = true;
                        }
                    }

                    for (int i = 0; i <= 3; i++){
                        if (isOk[i]){
                            types[curNode] = i+1;
                            break;
                        }
                    }
                }
            }
        }
        
        vector<int> answer;
        
        for(int i = 1; i <= N; i++){
            answer.push_back(types[i]);
        }
        
        return answer;
    }
};

int main() {
	int N = 4;
	vector<vector<int>> paths = {{1,2}, {2,3}, {3,4}, {4,1}, {1,3}, {2,4}};

	Solution sol;
	vector<int> ans = sol.gardenNoAdj(N, paths);

	for (int i = 0; i < ans.size(); ++i)
	{
		cout << ans[i] << endl;
	}
 
	return 0;
}