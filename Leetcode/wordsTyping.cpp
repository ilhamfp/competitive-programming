#include <bits/stdc++.h>
using namespace std;
bool DEBUG=true;
class Solution {
public:
    int wordsTyping(vector<string>& sentence, int rows, int cols) {
        int answer = 0;
        int curSentence = 0;
        int oldAnswer = 0;
        int oldCurSentence = 0;
        int memoAnswer[105];
        int memoSentence[105];
        memset(memoAnswer, -1, sizeof(memoAnswer));

        for(int r = 0; r < rows; ++r){
        	if (memoAnswer[curSentence] == -1)
        	{
        		oldAnswer = answer;
        		oldCurSentence = curSentence;
        		for (int c = 0; c < cols; ++c)
        		{
        		    // cout << endl << c << endl;
        		    if (cols-c >= sentence[curSentence].size())
        		    {
        		        if (DEBUG)
        		        {
        		            cout << sentence[curSentence];
        		        }

        		        c+=sentence[curSentence].size()-1;
        		        curSentence++;

        		        if (c <= cols-1)
        		        {
        		            //get space
        		            c++;
        		            if (DEBUG)
        		            {
        		                cout << '-';
        		            }
        		        }

        		        if (curSentence == sentence.size())
        		        {
        		            curSentence = 0;
        		            answer++;
        		        }
        		    } else {
        		        if (DEBUG)
        		        {
        		            cout << '-';
        		        }
        		    }
        		}
        		if (DEBUG)
        		{
        		    cout << endl;
        		}
        		memoAnswer[oldCurSentence] = answer - oldAnswer;
        		memoSentence[oldCurSentence] = curSentence;
        	} else {
        		answer += memoAnswer[curSentence];
        		curSentence = memoSentence[curSentence];
        	}
            
        }

        return answer;
    }
};

int main() {
  // cout << ((int)'a'+26)-'y' << endl;
  // cout << (int)'y' << endl;
  Solution sol;
  vector<string> v1= {"hello", "world"};
  vector<string> v2= {"a", "bcd", "e"};
  vector<string> v3= {"I", "had", "apple", "pie"};
  vector<string> v4= {"f", "p", "a"};
  cout << sol.wordsTyping(v1, 2, 8) << endl;
  cout << sol.wordsTyping(v2, 3, 6) << endl;
  cout << sol.wordsTyping(v3, 4, 5) << endl;
  cout << sol.wordsTyping(v4, 8, 7) << endl;
  return 0;
}
