#include <bits/stdc++.h>
using namespace std;


int main(){
	int n;
	int t;
	string first;
	int array[1111];
	scanf("%d", &t);
	while(t--){
		cin>>n>>first;
		for(int i=0;i<n;i++){
			cin>>array[i];
		}
		if(first=="Dee" && n==1 && array[0]%2==0){
			cout<< "Dee" << endl;
		} else {
			cout << "Dum" << endl;
		}
	}

	return 0;
}