class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        vector<bool> dp(n + 1, false);
        dp[0] = true;
        int max_len = 0;
        for (int i = 0; i < wordDict.size(); ++i) {
            max_len = max(max_len, static_cast<int>(wordDict[i].size()));
        }

        for (int i = 1; i <= n; i++) {
            for (int j = i - 1; j >= max(i - max_len - 1, 0); j--) {
                bool found = false;
                for (int k = 0; k < wordDict.size(); ++k) {
                    if (dp[j] && wordDict[k] == s.substr(j, i - j)) {
                        found = true;
                        break;
                    }
                }
                if (found) {
                    dp[i] = true;
                    break;
                }
            }
        }

        return dp[n];
    }
};
