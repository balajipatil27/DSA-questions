class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        int maxi =arr[0];
        int sec=-1;
        for(int i =1;i<n;i++){
            if(arr[i]>maxi){
                sec = maxi;
                maxi = arr[i];
            }
            if(arr[i]>sec && arr[i] != maxi){
                sec = arr[i];
            }
        }
        return sec;
    }
};
