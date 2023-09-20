#include <bits/stdc++.h>

using namespace std;

void run_case() {

    int64_t N; cin >> N;
    int64_t A[N];
    for(int i = 0; i < N; ++i){
        cin >> A[i];
    }
    int ok = 0;
    for(int i = 0; i < N-1; ++i){
        if(A[i] > A[i+1]){
            ok = 1;
            break;
        }
    }
    if(!ok){
        cout << 0 << '\n';
    }
    else{
        if(A[0] == 1 or A[N-1] == N){
            cout << 1 << '\n';
        } else if(N >= 3 && A[N-1] == 1 && A[0] == N){
            cout << 3 << '\n';
        } else{
            cout << 2 << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests;
    cin >> tests;
    while(tests-- > 0){

        run_case();
    }

    return 0;
}
