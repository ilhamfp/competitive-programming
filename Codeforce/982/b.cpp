#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back   
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector< pair<int, pair<int,int> > > vectorKosong;
    vector< pair<int, pair<int,int> > > vectorIsi;
    priority_queue<  pair<int, pair<int,int> > > queueKosong;
    priority_queue<  pair<int, pair<int,int> > > queueIsi;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin>>x;
        queueKosong.push(mp(-1*x,mp(i+1,0)));
    }
    // for (int i = 0; i < v.size(); ++i)
    // {
        
    //     printf("%d %d %d\n", v[i].first, v[i].second.first, v[i].second.second );
    // }
    string s;
    cin>>s;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '0')
        {
            cout<<queueKosong.top().second.first<<" ";
            auto temp = queueKosong.top();
            queueKosong.pop();
            temp.first = -1*(temp.first);
            queueIsi.push(temp);
        } else {
            cout<<queueIsi.top().second.first<<" ";
            queueIsi.pop();
        }
        // printf("Isinya\n");
        // for (int i = 0; i < v.size(); ++i)
        // {
            
        //     printf("%d %d %d\n", v[i].first, v[i].second.first, v[i].second.second );
        // }
    }
    cout<<endl;
    return 0;
}