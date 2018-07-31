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
    string s;
    cin>>s;
    bool one = false;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '1')
        {
            if (one)
            {
                printf("No\n");
                return 0;
            } else {
                one = true;
            }
        } else {
            if (one)
            {
                one = false;
            } else {
                if (i!=0)
                {
                    if ((i+1)<=(n-1))
                    {
                        if (s[i+1] != '1')
                        {
                            printf("No\n");
                            return 0;
                        } else {
                            if (i == 1)
                            {
                                printf("No\n");
                                return 0;
                            }
                        }
                    } else {
                        printf("No\n");
                        return 0;
                    }
                }
            }
        }
    }
    if (s.size() == 1 && s[0] == '0')
    {
        printf("No\n");
    } else {
        printf("Yes\n");
    }
    return 0;
}