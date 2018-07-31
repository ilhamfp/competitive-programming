#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define p push
#define fi first
#define se second   
#define pii pair< int , int >
#define pll pair< long , long >
#define pi acos(-1.0)
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define MOD 10e9+7
#define line puts("")
#define INF_INT -2147483648

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull; 

using namespace std;

bool cmp( string a, string b){
	return lexicographical_compare(a.begin(), a.end(), b.begin(), b.end());
}

int t;
int main() {
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1;
		cin>>s2;
		vector<string> permutasiYangSudahAda;
		bool ada = false;
		vector<string> vectorJawaban;
		int maxJawaban = -1;
		do{
			auto it = find(permutasiYangSudahAda.begin(), permutasiYangSudahAda.end(),s1);
			if (it == permutasiYangSudahAda.end())
			{
				
				int banyakSub = 0;
				for (int i = 0; i < s2.size() - s1.size() ; ++i)
				{
					bool isSub = true;

					for (int j = i; j < i+s1.size() && (isSub); ++j)
					{
						if (s2[j] != s1[j-i])
						{
							isSub = false;
						}
					}

					if (isSub)
					{

						ada = true;
						banyakSub++;
					}
				}

				if (banyakSub > maxJawaban)
				{
					maxJawaban = banyakSub;
					vectorJawaban.clear();
					vectorJawaban.pb(s1);
				} else if (banyakSub == maxJawaban){
					vectorJawaban.pb(s1);
				}
			}

		}while(next_permutation(s1.begin(), s1.end()));

		sort(vectorJawaban.begin(), vectorJawaban.end(), cmp);
		if (ada)
		{
			cout<<vectorJawaban[0]<<endl;
		} else {
			cout<<-1<<endl;
		}
	}
	
	return 0;
}