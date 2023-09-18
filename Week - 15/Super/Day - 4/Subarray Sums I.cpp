using namespace std;
 
void run_case() {
    int64_t N, M;
    cin >> N >> M;
    vector<int> A(N);
 
    for (auto& x: A)
        cin >> x;
 
    //Two Pointers algorithm
    int64_t sum = 0, ans = 0;
 
    for (int i = 0, j = 0; i < N; ++i) {
        sum += A[i];
 
        while (sum > M) {
            sum -= A[j];
            ++j;
        }
 
        if (sum == M)
            ++ans;
    }
 
    cout << ans << '\n';
}
 
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests = 1;
 
    while (tests-- > 0)
        run_case();
 
    return 0;
}
