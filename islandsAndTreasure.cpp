class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int> (m,-2));

        queue<pair<pair<int,int>,int>> q;
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]== 0){
                    q.push({{i,j},0});
                    vis[i][j] = 0;
                } 
                if(grid[i][j] == -1){
                    vis[i][j] =-1;
                }

            }
        } 
        int delrow[] = {0,-1,0,1};
        int delcol[] = {-1,0,1,0};
        int tm =0;
        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int dis = q.front().second;
            q.pop();

            for(int i =0;i<4;i++){
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];

                if(nrow<n && nrow >=0 && ncol >=0 && ncol<m && vis[nrow][ncol] ==-2 ){
                    q.push({{nrow,ncol},dis+1});
                    vis[nrow][ncol] = dis+1;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                grid[i][j] = vis[i][j];
            }
        }

    }
};
