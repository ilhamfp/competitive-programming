#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;
long long const MODULO = 998244353;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };

bool cmp(tuple< int, int ,int> s1, tuple< int, int ,int> s2) 
{ 
    return (get<1>(s1) < get<1>(s2)); 
} 
  
int cek(vector< tuple< int, int ,int> > schedule, int index) 
{ 
    for (int j=index-1; j>=0; j--) 
    { 
        if (get<1>(schedule[j]) < get<0>(schedule[index])){
            return j; 
        } 
    } 
    return -1; 
} 
  
int jawaban(vector< tuple< int, int ,int> > schedule) 
{ 
    sort(schedule.begin(), schedule.end(), cmp); 
  
    int *temp = new int[schedule.size()]; 
    temp[0] = get<2>(schedule[0]); 
  
    for (int i=1; i<schedule.size(); i++) 
    { 
        int profit = get<2>(schedule[i]); 
        int l = cek(schedule, i); 
        if (l != -1) {
            // cout<<profit<<" "<<l<<endl;
            profit += temp[l]; 
        }
  
        temp[i] = max(profit, temp[i-1]); 
    } 
  
    int result = temp[schedule.size()-1]; 
    delete[] temp; 
  
    return result; 
} 
  
int main() 
{ 
    int n;
    cin>>n;
    vector< tuple< int, int ,int> > v;
    for (int i = 0; i < n; ++i)
    {
        int s,f,d;
        cin>>s>>f>>d;
        v.pb( make_tuple(s,f,d) );
    }

    cout << jawaban(v) << endl; 
    return 0; 
} 

