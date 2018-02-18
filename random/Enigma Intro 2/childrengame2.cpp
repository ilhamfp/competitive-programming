#include <bits/stdc++.h>
using namespace std;

bool komparator (string i, string j) {
	if (i.length() == j.length()){
		return (i>=j);
	} else {
		return ((i+j)>=(j+i));
	}
	
}

int main(){

	int n =1;
	scanf("%d", &n);
	while (n != 0){
		
		
		string belum[55];
		for (int i=0; i<n; i++) { cin >> belum[i]; }
		sort(belum, belum+n, komparator);
		for (int i=0; i<n; ++i) { cout << belum[i]; }
		cout << endl;
		scanf("%d", &n);

	}
	return 0;
}