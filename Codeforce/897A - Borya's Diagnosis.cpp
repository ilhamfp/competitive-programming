#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265


int main(){
	std::vector<pair<int,int>> v;
	int n, banyak;
	scanf("%d", &n);
	banyak = n;
	while(n--){
		int s,d;
		scanf("%d %d",&s,&d);
		v.push_back(make_pair(s,d));
	}
	int hari = 1;
	for (int i = 0; i < banyak; ++i)
	{
		while(hari != v[i].first ){
			if(hari > v[i].first){
				v[i].first += v[i].second;
			} else if (hari < v[i].first) {
				hari++;
			} 
		}
		hari++;
	}

	hari--;
	printf("%d\n", hari);


    return 0;
}