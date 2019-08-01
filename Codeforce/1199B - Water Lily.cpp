#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define __FAST ios_base::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef unsigned long long ull;

int main()
{
    // ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    double h, l;
    scanf("%lf %lf", &h, &l);
    printf("%.8lf\n", ((l*l) - (h*h))/(2.0*h));
    

    return 0;
}

