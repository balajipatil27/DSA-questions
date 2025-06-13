class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int l=0;
        int r=0;
        int jump = 0;
        while(r<n-1){
            int fur = INT_MIN;
            for(int i =0;i<=r;i++){
                fur = max(fur,i+nums[i]);
                
            }
            l = r+1;
            r=fur;
            jump = jump+1;
            
        }
    return jump;
    }
};
