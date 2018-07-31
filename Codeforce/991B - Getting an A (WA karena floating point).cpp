#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;

int main(){
    vector<double> v;
    double n;
    double avg = 0;
    cin>>n;
    for (int i = 0; i < (int)n; ++i)
    {
        double x;
        cin>>x;
        avg+=x;
        v.pb(x);
    }
    avg = (avg/ n);
    double kurang = 4.5 - avg;
    sort(v.begin(), v.end());
    // cout<<kurang<<endl;
    // cout<<v[0]<<endl;
    for (int i = 0; i < (int)n; ++i)
    {
        v[i] = (5.0-v[i])/ (n);
        // cout<<v[i]<<endl;
    }
    int count = 0;
    while(kurang>0){
        kurang-=v[count];
        count++;
    }
    cout<<count<<endl;
    //asdsadsadsadas
    return 0;
}