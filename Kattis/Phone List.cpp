#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265


int main(){
    bool answer;
    int t,n;
    int x,y;
    string a[10000];
    cin >> t;
    for (int ii=0;ii<t;ii++){
        answer = true;
        cin >> n;
        for (int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        // for (int i=0;i<n;i++){
        // 	cout << "TEST:" << a[i] << endl;
        // }
        for (int i=0;i<n-1;i++){
            if (a[i+1].compare(0,a[i].size(),a[i]) == 0){
                answer = false;
            	break;
            }
        }
        if (answer)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}