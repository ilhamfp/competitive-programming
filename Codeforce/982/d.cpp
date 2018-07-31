#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back   
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 
using namespace std;

int n;
vector<int> travelDistance;
vector<int> temp;

bool valid(int value){
    bool bisa = true;


    return bisa;
}

int main()
{
    cin>>n;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin>>x;
        travelDistance.pb(x);
        temp.pb(x);
    }
    sort(temp.begin(), temp.end());

    for (int dayStaying = 1; dayStaying <= (n/2); ++dayStaying)
    {
        if (n%2)
        {
            if (dayStaying%2)
            {
                int banyakPindah1 = n/(dayStaying+1);
                int banyakPindah2 = n/(dayStaying+1);
                int banyakPindah3 = n/(dayStaying+1);
            } else {
                
            }
        } else {
            if (dayStaying%2)
            {
                
            } else {
                
            }
        }


        
    }
    return 0;
}