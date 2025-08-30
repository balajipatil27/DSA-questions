class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        if(n<3) return 0;
        int cnt=0;
        for(int i =0;i<n;i++){
            
            for(int j =i+1;j<n-1;j++){
                if(nums[j] - nums[j-1] == nums[j+1] - nums[j] ){
                    cnt++;
                }
                else{
                    break;
                }
            }
        }
        return cnt;
    }
};
