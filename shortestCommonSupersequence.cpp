class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int l1 = str1.size();
        int l2 = str2.size();

        vector<vector<int>> dp(l1+1, vector<int> (l2+1,0));
        for(int i =1;i<=l1;i++){
            for(int j =1;j<=l2;j++){
                if(str1[i-1] == str2[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
        int i = l1;
        int j = l2;
        string res= "";
        while(i>0 && j>0){
            if(str1[i-1] ==  str2[j-1]){
                res.push_back(str1[i-1]);
                i--;
                j--;
            }
            else if(dp[i-1][j] > dp[i][j-1]){
                res.push_back(str1[i-1]);
                i--;
            }
            else{
                res.push_back(str2[j-1]);
                j--;
            }
        }
        while(i>0){
            res.push_back(str1[i-1]);
            i--;
        }

        while(j>0){
            res.push_back(str2[j-1]);
            j--;
        }
         reverse(res.begin(), res.end());



        return res;
        
    }
};
