class Solution {
  public:
    int orangesRotting(vector<vector<int>>& mat) {
        // Code here
        int n = mat.size();
        int m = mat[0].size();
        //{r,c},dist
        queue<pair<pair<int,int> ,int >> q;
        vector<vector<int>> vis(n,vector<int> (m,0));
        
        for(int i =0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(mat[i][j] == 2){
                    vis[i][j] = 1;
                    q.push({{i,j},0});
                }
                else{
                    vis[i][j] =0;
                }
            }
        }
        int tm=0;
        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            
            int dis = q.front().second;
            vis[row][col] = 2;
            q.pop();
            tm = max(tm,dis);
            int delrow[] = {-1,0,1,0};
            int delcol[] = {0,-1,0,1};
            for(int i=0;i<4;i++){
                int nrow = row+delrow[i];
                int ncol = col + delcol[i];
                
                if(nrow >= 0 && ncol >=0 && nrow<n && ncol<m && mat[nrow][ncol]==1 && vis[nrow][ncol]==0){
                    vis[nrow][ncol] =1;
                    q.push({{nrow,ncol},dis+1});
                }
            }
            
        }
        
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(mat[i][j] ==1 && vis[i][j] == 0) return -1;
            }
        }
        return tm;
        
    }
};
