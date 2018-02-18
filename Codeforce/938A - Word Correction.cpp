#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define p push
#define ll long long
#define fi first
#define se second   
#define pii pair< int , int >
#define pll pair< long , long >
#define pi acos(-1.0)
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define MOD 10e9+7
#define line puts("")
#define INF_INT -2147483648

using namespace std;

string n;
int main(){
	int x;
	cin>>x;
	cin>>n;
	n+="z";
	char sebelumnya = n[0];
	// cout<<n.size();
	// cout<<n[0];
	bool sebelumnyaVowel;
	if (sebelumnya == 'a' || sebelumnya == 'i' || sebelumnya == 'u' || sebelumnya == 'e' || sebelumnya == 'o' || sebelumnya == 'y')
	{
		sebelumnyaVowel = true;
	} else {
		sebelumnyaVowel = false;
	}
	bool consVowel = false;
	for (int i = 1; i < n.size(); ++i)
	{

		if (sebelumnyaVowel)
		{
			// printf("MASUK\n");
			if (n[i] == 'a' || n[i] == 'i' || n[i] == 'u' || n[i] == 'e' || n[i] == 'o' || n[i] == 'y')
			{
				if (consVowel)
				{
					sebelumnya = n[i];
				} else {
					cout<<sebelumnya;
					sebelumnya = n[i];
					consVowel = true;
				}
			} else {
				if (consVowel)
				{
					sebelumnya = n[i];
					consVowel = false;
				} else {
					cout<<sebelumnya;
					sebelumnya = n[i];
				}
				
				if (sebelumnya == 'a' || sebelumnya == 'i' || sebelumnya == 'u' || sebelumnya == 'e' || sebelumnya == 'o' || sebelumnya == 'y')
				{
					sebelumnyaVowel = true;
				} else {
					sebelumnyaVowel = false;
				}
			}

		} else {
			// printf("%d\n", i );
			cout<<sebelumnya;
			sebelumnya = n[i];
			if (sebelumnya == 'a' || sebelumnya == 'i' || sebelumnya == 'u' || sebelumnya == 'e' || sebelumnya == 'o' || sebelumnya == 'y')
			{
				sebelumnyaVowel = true;
			} else {
				sebelumnyaVowel = false;
			}
		}
	}
	cout<<endl;
	return 0;
}