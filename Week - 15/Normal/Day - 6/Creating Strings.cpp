#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s; cin >> s;
	sort(s.begin(), s.end());
	vector<string>Arr;
	do{
		Arr.push_back(s);
	}while(next_permutation(s.begin(), s.end()));
	cout << Arr.size() << '\n';
	for(string x: Arr){
		cout << x << '\n';
	}
	cout << '\n';
	return 0;
}
