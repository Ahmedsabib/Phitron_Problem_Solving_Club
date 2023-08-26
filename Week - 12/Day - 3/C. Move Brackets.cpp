#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		string s;
		cin >> n >> s;
		int a = 0;
		int b = 0;
		for(int i = 0; i < n; ++i){
			if(s[i] == '(') ++a;
			else{
				--a;
				if(a < 0){
					a = 0;
					b++;
				}
			}
		}
		cout << b << endl;
	}
	return 0;
}
