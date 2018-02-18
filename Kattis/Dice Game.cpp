#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265


int main(){
	int a1,b1,a2,b2;
    double playerA=0,playerB=0;
    cin >> a1;cin >> b1;cin >> a2;cin >> b2;
    playerA = (a1+b1)/2.0 + (a2+b2)/2.0;

    cin >> a1;cin >> b1;cin >> a2;cin >> b2;
    playerB = (a1+b1)/2.0 + (a2+b2)/2.0;
	if (playerA>playerB)
        cout << "Gunnar" << endl;
    else if (playerB>playerA)
        cout << "Emma" << endl;
    else
        cout << "Tie" << endl;
    return 0;
}