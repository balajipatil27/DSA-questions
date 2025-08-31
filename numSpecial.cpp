class Solution {
public:

    bool fun(vector<vector<int>>& mat, int r , int c){
        int n = mat.size();
        int m = mat[0].size();
        for(int i =0;i<n;i++){
            if(mat[i][c] == 1 && i != r){
                return false;
            }
            
        }
        for(int j =0;j<m;j++){
            if(mat[r][j] == 1 && j != c){
                return false;
            }
        }
        return true;
    }

    int numSpecial(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int cnt=0;
        for(int i =0;i<n;i++){
            for(int j= 0;j<m;j++){
                if(mat[i][j] == 1){
                    if(fun(mat,i,j)){
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};
