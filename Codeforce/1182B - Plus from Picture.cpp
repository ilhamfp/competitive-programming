#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    // Find the center, the point that have 4 neighbour.
    // From there, travel to 4 direction while marking it.
    // After that, travel thru every cell. If there is no "*" that didn't get marked then return "YES".
    // Else "NO"

    int h, w;
    char tab[600][600]; // h x w
    cin >> h >> w;

    // Create border to make validation easier
    // Horizontally
    for (int i = 0; i <= w+1; ++i){
        tab[0][i] = '.';
        tab[h+1][i] = '.';
    }

    // Vertically
    for (int i = 0; i <= h+1; ++i){
        tab[i][0] = '.';
        tab[i][w+1] = '.';
    }

    for (int i = 1; i <= h; ++i)
    {
        for (int j = 1; j <= w; ++j){

            cin >> tab[i][j];
        }
    }

    // print matrix to debug
    // for (int i = 1; i <= h; ++i)
    // {
    //     for (int j = 1; j <= w; ++j){

    //         cout << tab[i][j];
    //     }
    //     cout << endl;
    // }


    // STEP 1: find the center
    bool centerFound = false;
    int hCenter, wCenter;

    for (int i = 1; i <= h && !centerFound; ++i){
        for (int j = 1; j <= w && !centerFound; ++j){
            if (tab[i][j] == '*' && tab[i+1][j] == '*' && tab[i-1][j] == '*' && tab[i][j+1] == '*' && tab[i][j-1] == '*'){
                centerFound = true;
                hCenter = i;
                wCenter = j;
            }
            
        }
}

    if (centerFound)
    {
        map<pair<int, int>, bool> visited;
        visited[make_pair(hCenter, wCenter)] = true;

// iterate to the left
        for (int i = wCenter-1; i >= 0; --i){
if (tab[hCenter][i] == '*'){
    visited[make_pair(hCenter, i)] = true;
} else {
    break;
}
        }

// iterate to the right
for (int i = wCenter+1; i <= w; ++i){
if (tab[hCenter][i] == '*'){
    visited[make_pair(hCenter, i)] = true;
} else {
    break;
}
        }

// iterate to the top
for (int i = hCenter-1; i >= 0; --i){
if (tab[i][wCenter] == '*'){
    visited[make_pair(i, wCenter)] = true;
} else {
    break;
}
        }

// iterate to the bottom
for (int i = hCenter+1; i <= h; ++i){
if (tab[i][wCenter] == '*'){
    visited[make_pair(i, wCenter)] = true;
} else {
    break;
}
        }

bool nonMarkedFound = false;

for (int i = 1; i <= h && !nonMarkedFound; ++i){
        for (int j = 1; j <= w && !nonMarkedFound; ++j){
            if (tab[i][j] == '*' && !visited[make_pair(i, j)]){
                nonMarkedFound = true;
            }
        }
}

if (nonMarkedFound){
cout << "NO" << endl;
} else {
cout << "YES" << endl;
}

    } else {
        cout << "NO" << endl;
    }

    return 0;
}

