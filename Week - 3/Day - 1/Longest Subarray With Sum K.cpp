int longestSubarrayWithSumK(vector < int > a, long long k) {
    int n = a.size();
    int max_len = 0;
    for (int i = 0; i < n; ++i) {
        long long sum = 0;
        for(int j = i; j < n; ++j) {
            sum += a[j];
            if(sum == k) {
                max_len = max(max_len, j - i + 1);
            }
        }
    }
    return max_len;
}
