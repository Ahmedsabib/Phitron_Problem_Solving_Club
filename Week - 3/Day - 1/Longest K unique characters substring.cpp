int longestKSubstr(string s, int k) {
    unordered_map<char,int> mp;
    int j = 0, ans = 0, n = s.length();
    for(int i = 0; i < n;i++)
    {
        mp[s[i]]++;
        if(mp.size() == k)
        {
            ans = max(ans, i - j + 1);
        }
        else if(mp.size() > k)
        {
            while(mp.size() != k)
            {
                mp[s[j]]--;
                if(mp[s[j]] == 0) {
                    mp.erase(s[j]);
                }
                j++;
            }
        }
    }
    if(ans == 0) {
        return -1;
    }
    return ans;
}
