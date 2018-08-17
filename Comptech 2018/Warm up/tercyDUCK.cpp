/*
Terinspirasi dari duck yang dapat berbicara seperti video diatas. Tahukah kalian bahwa Duck
adalah seorang agen mata-mata? Kali ini Duck memata-matai pria penjual lemonade , agen
duck pun mengubah namanya agar tidak gampang dikenali. Agar terlihat tetap keren dan beken
, agen duck ingin nama barunya tetap mengandung unsur ‘duck’.
Bantulah agen duck untuk menentukan apakah nama yang di buat mengandung kombinasi yang
tepat seperti yang dia inginkan.
Input
Baris pertama terdiri dari integer T(<=100) yang mewakili jumlah kasus uji.
Selanjutnya diikuti T baris kata S (1 ≤ | S | ≤ 100) setiap kata mewakili nama yang diberikan.
Nama yang diberikan hanya terdiri dari huruf 'a' .. 'z'. (huruf kecil).
Output
Untuk setiap test case print YA bila terdapat kombinasi duck , dan TIDAK bila sebaliknya.
*/
#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
typedef long long ll;
typedef unsigned long long ull;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if (count==0 && s[i]=='d')
            {
                count++;
            } else if(count==1 && s[i]=='u'){
                count++;
            } else if(count==2 && s[i]=='c'){
                count++;
            } else if(count==3 && s[i]=='k'){
                count++;
                cout<<"YA"<<endl;
                break;
            }
        }
        if (count!=4)
        {
            cout<<"TIDAK"<<endl;
        }
    }
    return 0;
}
