class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        double curavg =INT_MAX;

        int i =0;
        while(i<n/2){
            double avg = (nums[i] + nums[n-i-1])/2.0;
            curavg = min(curavg,avg);
            i++;
        }
    return curavg;
    }
};
