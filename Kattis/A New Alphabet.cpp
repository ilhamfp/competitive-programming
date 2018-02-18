#include <bits/stdc++.h>
using namespace std;

int main() {
    string arr[] = {"@", "8", "(", "|)", "3", "#", "6", "[-]", "|", "_|", "|<", "1", "[]\\/[]", "[]\\[]", "0", "|D", "(,)", "|Z", "$", "']['", "|_|", "\\/", "\\/\\/", "}{", "`/", "2"};
    string masukan;
    getline(cin, masukan);
    
    transform(masukan.begin(), masukan.end(), masukan.begin(), ::tolower);
    
    int panjang = masukan.length();
    for (int i = 0; i < panjang; ++i)
    {

        if ((masukan[i] <= 'z') && (masukan[i] >= 'a')){
            cout << arr[masukan[i]-'a'];
        } else  {
            cout << masukan[i];
        }
    }
    cout << endl;
    return 0;
}