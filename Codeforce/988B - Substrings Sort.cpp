#include <bits/stdc++.h>
 
using namespace std;
 
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
 
typedef long long ll;

int n;
string v[1000];

struct compare {
    bool operator()(const std::string& first, const std::string& second) {
        return first.size() < second.size();
    }
};

compare cmp;

int main(){
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin>>s;
        v[i] = s;
    }

    sort(v, v+n, cmp);

    bool bisa = true;
    for (int i = 0; i < n-1; ++i)
    {
        auto found = v[i+1].find(v[i]);
        if (found != std::string::npos){
            
        } else {
            bisa = false;
            break;
        }
    }

    if (bisa)
    {
        printf("YES\n");
        for (int i = 0; i < n; ++i)
        {
            cout<<v[i]<<endl;
        }
    } else{
        printf("NO\n");
    } 
        
    return 0;
}