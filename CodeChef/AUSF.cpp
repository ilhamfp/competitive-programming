#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;
typedef unsigned long long ull;

unordered_map<string,string> asal;

string root(string s1){
    if (asal[s1] == s1 )
    {
        return s1;
    } else if (asal[s1] == ""){
        asal[s1] = s1;
        return s1;
    }else {
        asal[s1] = asal[asal[s1]];
        return root(asal[asal[s1]]);
    }
}

bool find(string s1, string s2){
    string rootS1 = root(s1);
    string rootS2 = root(s2);
    if (rootS1 != rootS2)
    {
        asal[rootS1] = rootS2;
        return false;
    }
    return true;
}

int main(){
    int q;
    cin>>q;
    while(q--){
        string s1,s2;
        cin>>s1>>s2;
        if (find(s1,s2))
        {
            cout<<"Found in friend list"<<endl;
        } else {
            cout<<"Found by random"<<endl;
        }
    }
    return 0;
}