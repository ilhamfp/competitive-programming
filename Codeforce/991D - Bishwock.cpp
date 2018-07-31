#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;
string s1,s2;

bool cek1(int k){
    if (s1[k] == '0' && s2[k] == '0' && s1[k+1] == '0')
    {
        s1[k] = 'X';
        s2[k] = 'X';
        s1[k+1] = 'X';
        return true;
    } else {
        return false;
    }
}

bool cek2(int k){
    if (s1[k] == '0' && s1[k+1] == '0' && s2[k+1] == '0')
    {
        s1[k] = 'X';
        s1[k+1] = 'X';
        s2[k+1] = 'X';
        return true;
    } else {
        return false;
    }
}

bool cek3(int k){
    if (s1[k+1] == '0' && s2[k] == '0' && s2[k+1] == '0')
    {
        s1[k+1] = 'X';
        s2[k] = 'X';
        s2[k+1] = 'X';
        return true;
    } else {
        return false;
    }
}

bool cek4(int k){
    if (s1[k] == '0' && s2[k] == '0' && s2[k+1] == '0')
    {
        s1[k] = 'X';
        s2[k] = 'X';
        s2[k+1] = 'X';
        return true;
    } else {
        return false;
    }
}

int main(){
    cin>>s1>>s2;
    ll ans = 0;
    for (int i = 0; i < s1.size()-1; ++i)
    {
        if (cek4(i))
        {
            ans++;
        } else if (cek1(i)){
            ans++;
        } else if (cek2(i)){
            ans++;
        } else if (cek3(i)){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}