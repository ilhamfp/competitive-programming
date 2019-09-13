#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int count[26];

    int dfs(int curCount[]){
    	int answer = 0;
    	for(int i = 0; i < 26; i++){
    		if (curCount[i] < count[i])
    		{
    			curCount[i]++;
    			answer += dfs(curCount);
    			curCount[i]--;
    		}
    	}
    	return answer + 1;
    }

    int numTilePossibilities(string tiles) {
    	memset(count, 0, sizeof(count));
        for(int c: tiles){
            count[c-65] += 1;
        }

        int answer = 0;
        int curCount[26];
    	memset(curCount, 0, sizeof(curCount));

        for(int i = 0; i < 26; i++){
        	if (curCount[i] < count[i])
        	{
        		curCount[i]++;
        		answer += dfs(curCount);
        		curCount[i]--;
        	}
        }
        return answer;
    }
};

int main() {
	string s1 = "AAB";
	string s2 = "AAABBC";
 	
 	Solution sol;

 	cout << sol.numTilePossibilities(s1) << endl;
 	cout << sol.numTilePossibilities(s2) << endl;

 	cout << (int)'A' << endl;
 	cout << (int)'Z' << endl;
	return 0;
}