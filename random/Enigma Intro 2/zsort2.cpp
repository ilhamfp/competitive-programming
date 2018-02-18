#include <bits/stdc++.h>
using namespace std;


int main()
{
    int na[1010],ans[1010];

    int N;
    scanf("%d",&N);

    for(int i = 1 ; i <= N ;i++){
         scanf("%d",&na[i]);
     }

    sort(na + 1, na + 1 + N);
    int nl = N;
        
    for(int i = 2 ; i <= N; i += 2){
        ans[i] = na[nl--];
    }
    for(int i = 1 ; i <= N; i += 2){
        ans[i] = na[nl--];
    }

    for(int i = 1 ; i <= N; i++){
        printf("%d ",ans[i]);
    }

    return 0;
}