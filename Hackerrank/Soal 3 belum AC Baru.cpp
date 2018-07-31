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
int t;
map<string, int> mapSubString;
map<char, int> mapCek, mapDiCek;

bool cmp( string a, string b){
	return lexicographical_compare(a.begin(), a.end(), b.begin(), b.end());
}

bool isAPossibleSub(string yangMauDiCek){
	bool jawaban = true;
	map<char, int> mapDiCek;

	for (int i = 0; i < yangMauDiCek.size(); ++i)
	{
		mapDiCek[yangMauDiCek[i]]++;
	}

	for (int i = 97; i <= 122 && jawaban; ++i)
	{
		if (mapCek[i] != mapDiCek[i])
		{
			jawaban = false;
		}
	}
	return jawaban;
}

int main() {
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1;
		cin>>s2;
		bool ada = false;
		mapCek.clear();
		mapDiCek.clear();
		mapSubString.clear();
		for (int i = 0; i < s1.size(); ++i)
		{
			mapCek[s1[i]]++;
		}
		
		for (int i = 0; i < s2.size() - s1.size()+1; ++i)
		{
			
			if (i == 0)
			{
				bool jawaban = true;

				for (int j = i; j < i+s1.size(); ++j)
				{
					mapDiCek[s2[j]]++;
				}

				for (int j = 97; j <= 122 && jawaban; ++j)
				{
					if (mapCek[j] != mapDiCek[j])
					{
						jawaban = false;
					}
				}
				if (jawaban)
				{
					string sub = "";
					for (int j = i; j < i+s1.size(); ++j)
					{
						sub+= s2[j];
					}
					mapSubString[sub]++;
				}

			} else {
				bool jawaban = true;

				mapDiCek[s2[i-1]]--;
				mapDiCek[s2[i+s1.size()-1]]++;

				for (int j = 97; j <= 122 && jawaban; ++j)
				{
					if (mapCek[j] != mapDiCek[j])
					{
						jawaban = false;
					}
				}
				if (jawaban)
				{
					string sub = "";
					for (int j = i; j < i+s1.size(); ++j)
					{
						sub+= s2[j];
					}
					mapSubString[sub]++;
				}
			}
			
		}

		vector<string> vectorJawaban;
		int maxJawaban = -1;
		for (auto p : mapSubString)
		{
			ada = true;
			if (p.second > maxJawaban)
			{
				maxJawaban = p.second;
				vectorJawaban.clear();
				vectorJawaban.pb(p.first);
			} else if (p.second == maxJawaban){
				vectorJawaban.pb(p.first);
			}
		}

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