int longestSubarrayWithSumK(vector < int > a, long long k) {

    int n = a.size();
    // maxLength is used to store the maximum 
    // length of a subarray whose sum = 'k'
    
    int maxLength = 0;

    // Iterating over 'a'
    for (int i = 0; i < n; ++i) {
        long long currentSum = 0;
        for(int j = i; j < n; ++j) {
            currentSum += a[j];

            if(currentSum == k) {
                maxLength = max(maxLength, j - i + 1);
            }
        }
    }

    return maxLength;
}
