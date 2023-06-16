class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int n, int k) 
    { 
      unordered_map<int, int> mp; 
      int sum = 0, max_len = 0;
      for (int i = 0; i < n; i++) { 
          sum += arr[i]; 
          if (sum == k) { 
              max_len = i + 1; 
          }
          if (mp.find(sum) == mp.end()) { 
              mp[sum] = i;
          }
          if (mp.find(sum - k) != mp.end()) { 
              if (max_len < (i - mp[sum - k])) { 
                  max_len = i - mp[sum - k]; 
              }
          } 
      } 
      return max_len; 
    } 
};
