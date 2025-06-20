class Solution {
    void bfs(int row , int col,vector<vector<int>> &vis ,vector<vector<char>>& grid){
        int n = grid.size();
        int m = grid[0].size();
        
        vis[row][col] = 1;
        queue<pair<int,int>> q;
        
        q.push({row,col});
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            
            for(int dr = -1; dr <=1;dr++){
                for(int dc = -1;dc<=1;dc++){
                    int nrow = row+dr;
                    int ncol = col+dc;
                    if( nrow >= 0 && nrow<n && ncol <m && ncol >= 0 ){
                        if(!vis[nrow][ncol] && grid[nrow][ncol]=='L'){
                        q.push({nrow,ncol});
                        vis[nrow][ncol] = 1;
                        }
                    }
                }
            }
            
        }
        
    }  
    
  public:
    int countIslands(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        int cnt= 0;
        vector<vector<int>> vis(n,vector<int> (m,0));
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(grid[i][j] == 'L' && !vis[i][j]){
                    bfs(i,j,vis,grid);
                    cnt++;
                    
                }
            }
        }
        return cnt;
    }
};
