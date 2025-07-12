class Solution {
public:

    int f(int ind , int k , vector<int>& arr,int n,vector<int>& dp){
        int len =0;
        int maxi = INT_MIN;
        int sum =0;
        int maxsum =0;
        if(ind == n) return 0;
        if(dp[ind] != -1) return dp[ind];
        for(int i = ind;i<min(n,ind+k);i++){
            len++;
            maxi = max(maxi,arr[i]);
            sum =maxi*len + f(i+1,k,arr,n,dp);
            maxsum = max(maxsum,sum);
        }
        return dp[ind] = maxsum;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> dp(n,-1);
        return f(0,k,arr,n,dp);
    }
};
