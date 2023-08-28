#include <algorithm>
#include <array>
#include <bitset>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
using namespace std;

void run_case() {
	int N;
	cin >> N;
	vector<int> A(N);

	for (int i = 0; i < N; ++i) {
		cin >> A[i];
	}

	for (int i = 0; i < N; ++i) {
		for (int j = i+1; j < N; ++j) {
			if (A[i] == A[j] && j-i > 1) {
				cout << "YES" << '\n';
				return;
			}
		}
	}

	cout << "NO" << '\n';
}

int main() {
    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();

    return 0;
}
