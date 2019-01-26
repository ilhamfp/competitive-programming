#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;

pair<int,int> arah[8] = { {0,1} , {1,1} , {1,0} , {1,-1} , {0,-1} , {-1,-1} , {-1,0} , {-1,1} };


void test(int x1, int x2, int y1, int y2){
    // Set a pixel in a specific location to specific color
    dx = abs(x2 - x1);
    sx = x1 < x2 ? 1 : -1;
    dy = abs(y2 - y1);
    sy = y1 < y2 ? 1 : -1; 
    error = (dx > dy ? dx : -dy) / 2;
    do {
        printf("(%d,%d)\n", x1, y1);
        e2 = error;
        if (e2 >-dx) { error -= dy; x1 += sx; }
        if (e2 < dy) { error += dx; y1 += sy; }
    } while(x1 != x2 && y1 != y2);
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    

    return 0;
}


