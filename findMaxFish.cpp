class Solution {
public:
    int findMaxFish(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int maxi =0;
        vector<vector<int>> vis(n,vector<int> (m,0));
        queue<pair<int,int>>q;
        for(int i = 0;i<n;i++){
            for(int j =0;j<m;j++){
                if(grid[i][j] != 0 && !vis[i][j]){
                    q.push({i,j});
                    vis[i][j] =1;
                    int sum =0;
                     while(!q.empty()){
                        int row = q.front().first;
                        int col = q.front().second;
                        q.pop();
                        sum += grid[row][col];
                        maxi = max(maxi,sum);
                        int delrow[] = {0,-1,0,1};
                        int delcol[] = {-1,0,1,0};

                        for(int k=0;k<4;k++){
                            int nr = row+delrow[k];
                            int nc = col + delcol[k];

                            if(nr>=0 && nr<n && nc>=0 && nc<m && !vis[nr][nc] && grid[nr][nc] !=0){
                                vis[nr][nc] =1;
                                q.push({nr,nc});
                            }
                        }
                    }
                }
            }
        }
    return maxi;
       
    }
};
