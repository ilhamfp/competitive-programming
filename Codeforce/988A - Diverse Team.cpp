#include <bits/stdc++.h>
 
using namespace std;
 
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
 
typedef long long ll;
int n, k, banyakStudentDis = 0;
map<int,int> mapStudent;

int main(){

    cin>>n>>k;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin>>x;
        if (mapStudent[x] == 0)
        {
            mapStudent[x] = i;
            banyakStudentDis++;
        }
    }

    if (banyakStudentDis>=k)
    {
        printf("YES\n");
        int count = 0;
        for (auto p : mapStudent)
        {
            count++;
            cout<<p.se<<" ";
            if (count == k)
            {
                break;
            }
        }
        cout<<endl;
    } else {
        printf("NO\n");
    }
    
    return 0;
}