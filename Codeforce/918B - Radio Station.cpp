#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define mp make_pair
#define pb push_back
const int MOD = 1e9 + 7;
const int INF = 1e9;
const double EPS = 1e-9;
const double PI = acos(-1);
#define nl printf("\n");
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 

ll n, m;


int main() {
  cin>>n>>m;
  vector< pair<string, string> > server, command;
  for (int i = 0; i < n; ++i)
  {
    string x,y;
    cin>>x>>y;
    y+=";";
    // cout<<x<<" AAA "<<y<<endl;
    server.pb( mp(x, y) );
  }

  for (int i = 0; i < m; ++i)
  {
    string x,y;
    cin>>x>>y;
    // cout<<x<<" AAA "<<y<<endl;
    command.pb( mp(x,y) );
  }

  for (int i = 0; i < m; ++i)
  {
    string hashtag;

    for (int j = 0; j < n ; ++j)
    {
      if (command[i].second == server[j].second)
      {
        hashtag=server[j].first;
        break;
      }
    }
    cout<< command[i].first <<" "<< command[i].second << " #" <<hashtag<<endl;
    // printf("%s %s #%s\n", command[i].first, command[i].second, hashtag);
  }
  

  return 0;
}


