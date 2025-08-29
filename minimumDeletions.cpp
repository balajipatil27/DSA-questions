class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX, maxi = INT_MIN;
        int minIndex = 0, maxIndex = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] < mini) {
                mini = nums[i];
                minIndex = i;
            }
            if (nums[i] > maxi) {
                maxi = nums[i];
                maxIndex = i;
            }
        }
        int leftIndex = min(minIndex, maxIndex);
        int rightIndex = max(minIndex, maxIndex);
        int removeFront = rightIndex + 1;
        int removeBack = n - leftIndex;
        int removeFrontBack = leftIndex + 1 + n - rightIndex;
        int removeBackFront = rightIndex + 1 + n - leftIndex;
        return min({removeFront, removeBack, removeFrontBack, removeBackFront});
    }
};
