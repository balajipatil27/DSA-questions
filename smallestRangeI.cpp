class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n= nums.size();
        if(nums[n-1] - nums[0] > 2*k){
            return nums[n-1] - nums[0] - 2*k;
        }
        return 0;
    }
};
