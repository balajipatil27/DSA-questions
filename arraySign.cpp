class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n = nums.size();

        long long  sum =1;
        for(int i =0;i<n;i++){
            if(nums[i] < 0){
                nums[i] = -1;
            }
            else if (nums[i] > 0){
                nums[i] = 1;
            }
            else{
                nums[i] = 0;
            }
        }


        for(int i =0;i<n;i++){
            sum*= nums[i];
        }

        if(sum > 0){
            return 1;
        }
        else if(sum < 0){
            return -1;
        }
        return 0;
    }
};
