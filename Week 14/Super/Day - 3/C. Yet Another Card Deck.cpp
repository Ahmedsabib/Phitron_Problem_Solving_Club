#include<bits/stdc++.h>

using namespace std;

const int sz = 53;
int N, M;
int freq[sz];

int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	cin >> N >> M;
	for(int i = 1; i <= N; ++i){
		int x; cin >> x;
		if(!freq[x]) freq[x] = i;
	}
	while(M--){
		int x; cin >> x;
		int z = freq[x];
		freq[x] = 0;
		for(int i = 1; i < sz; ++i){
			if(freq[i] < z){
				freq[i]++;
			}
		}
		cout << z << ' ';
	}
	cout << '\n';

	return 0;
}
