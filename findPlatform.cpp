class Solution {
  public:
    int f(vector<int>& arr,vector<int>& dep){
        int need =0;
        int n = arr.size();
        int m = dep.size();
        int maxi =0;
        int i =0;
        int j =0;
        while(i<n && j< n){
            if(arr[i]<=dep[j]){
                need++;
                maxi = max(need,maxi);
                i++;
            }
            else{
                need--;
                j++;
            }
        }
        return maxi;
    }
    
    int findPlatform(vector<int>& arr, vector<int>& dep) {
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        
        
        return f(arr,dep);
        
    }
};
