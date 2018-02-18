#include <bits/stdc++.h>
using namespace std;

string masukan;
stack<char> s;

int main() {
	cin>>masukan;
	int kl = masukan.length();
	s.push('0');
	
	for (int i=0; i< kl; i++) {
		if (s.top() == '0') {
			s.push(masukan[i]);
		} else if (s.top() == masukan[i]) {
			s.pop();
		} else {
			s.push(masukan[i]);
		}
	}
	
	if (s.top() == '0') {
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	return 0;
}

