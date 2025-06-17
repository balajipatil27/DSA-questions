
class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        int l =0;
        int r = n*m-1;
        while(l<=r){
            int mid = l+(r-l)/2;
            int row = mid/m;
            int col = mid%m;
            if(mat[row][col] == x) return true;
            
            else if (mat[row][col] < x){
                l = mid+1;
                
            }
            else{
                r= mid-1;
            }
        }
        return false;
    }
};
