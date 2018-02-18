#include<bits/stdc++.h>
using namespace std;
bool comp (pair<int,pair<int,int>> A, pair<int,pair<int,int>> B){
    return A.first >= B.first;
}


int main(){
    int n, i, j, x;
    bool gakketemu = true;
    int maks=-1;
    vector<pair<int,pair<int,int>>> v;


    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){

            scanf("%d",&x);
            v.push_back(make_pair(x,make_pair(i,j)));
        }
    }
    
    sort(v.begin(),v.end(), comp);
    while(gakketemu){
        for (int i = 0; i < (n*n) && (gakketemu); ++i)
        {
            
            int key = v[i].first;
            int hitung = i+1;
            //check
            while(v[hitung].first == key){
                cout << "goblok" << endl;
                if (   ( (v[i].second.first != v[hitung].second.first ) || ( v[i].second.second != v[hitung].second.second ) ) && ( (v[i].second.first <= v[hitung].second.first) && ( v[i].second.second <= v[hitung].second.second ) )   )
                {
                    maks=key;
                    gakketemu = false;
                    break;
                }

                hitung++;
            }
        }
    }
    

    

    printf("%d\n",maks);
}
