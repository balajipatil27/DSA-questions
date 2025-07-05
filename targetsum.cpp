class Solution {
public:
    bool f(int ind, int target,vector<int>& nums ,vector<vector<int>>& dp){
        int n = nums.size();
        if(target == 0) return true;
        if(ind > n-1) return false;
        if(dp[ind][target] != -1) return dp[ind][target];
        
        bool take =false;
        if(target >=nums[ind]) {
            take = f(ind+1,target - nums[ind],nums,dp);
        }
        bool nottake = f(ind+1, target,nums,dp);
        return dp[ind][target] = take || nottake;
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum =0;
        for(int i =0 ;i<n;i++){
            sum += nums[i];
        }
        if(sum % 2 != 0) return false;
        int target = sum/2;
        vector<vector<int>> dp(n,vector<int> (target+1,-1));
        
        return f(0,target,nums,dp);
    }
};
