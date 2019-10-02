#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> split(string email){
        vector<string> answer;
        for(int i = 0; i < email.size(); i++){
            if (email[i] == '@'){
                answer.push_back(email.substr(0, i));
                answer.push_back(email.substr(i+1));
                break;
            }
        }
        return answer;
    }   

    void process(string& localName){
        string answer = "";
        for(int i = 0; i < localName.size(); i++){
            if (localName[i] == '+'){
                break;
            } else if (localName[i] != '.'){
                answer += localName[i];
            }
        }
        localName = answer;
    }

    int numUniqueEmails(vector<string>& emails) {
        set<string> answers;

        for(int i = 0; i < emails.size(); i++){
            vector<string> splittedEmail = split(emails[i]);
            string localName = splittedEmail[0];
            string domainName = splittedEmail[1];
            
            process(localName);

            string finalEmail = localName + "@" + domainName;
            answers.insert(finalEmail);
        }

        return answers.size();
    }
};

int main() {
    Solution sol;
    vector<string> q1;
    q1.push_back("test.email+alex@leetcode.com");
    q1.push_back("test.e.mail+bob.cathy@leetcode.com");
    q1.push_back("testemail+david@lee.tcode.com");
    cout << sol.numUniqueEmails(q1) << endl;
    return 0;
}
