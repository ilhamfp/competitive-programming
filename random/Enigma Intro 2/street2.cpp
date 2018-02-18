#include <bits/stdc++.h>
using namespace std;


int main() 
{
	int a[2000];
	stack<int> s;
	vector<int> v;
	int i, j, N, b, c, d, e;
	bool bisa;
	cin>>N;
	int NomorSekarang;
	while(N!=0)
	{
		NomorSekarang=1;
		for(i=1;i<=N;i++){
			cin>>a[i];
		}

		v.clear();
		while(!s.empty()){
			s.pop();
		}

		bisa=true;

		for(i=1;i<=N;i++)
		{
			if(a[i]==NomorSekarang)
			{
				v.push_back(a[i]);
				NomorSekarang++;
				continue;
			}
			while(!s.empty() && s.top()==NomorSekarang)
			{
				v.push_back(s.top());
				NomorSekarang++;
				s.pop();
				
			}
			s.push(a[i]);
		}

		while(s.size()!=0)
		{
			v.push_back(s.top());
			s.pop();
		}
		bisa=true;
	
		for(i=0; (i<v.size()-1); i++){
			if(v[i]+1!=v[i+1])
			{
				bisa=false;
				break;
			}
		}
		if(bisa==true)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
		cin>>N;
	}


	return 0;
}