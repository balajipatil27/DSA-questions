class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> vis(n,vector<int> (m,0));
        queue<pair<int,int>> q;

        for(int i=0;i<n;i++){
            if(board[i][0] == 'O'){
                vis[i][0] = 1;
            }
            if(board[i][m-1]== 'O'){
                vis[i][m-1] =1;
            }
        }

        for(int j =0;j<m;j++){
            if(board[0][j]== 'O'){
                vis[0][j] = 1;
            }
            if(board[n-1][j] == 'O'){
                vis[n-1][j] = 1;
            }
        }

        for(int i=0;i<n;i++){
            for(int j =0;j<m;j++){
                if(vis[i][j] == 1){
                    q.push({i,j});
                }
            }
        }

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;

            q.pop();

            int delrow[] = {0,1,0,-1};
            int delcol[] = {1,0,-1,0};

            for(int i =0;i<4;i++){
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];

                if(nrow >=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && board[nrow][ncol] == 'O' ){
                    q.push({nrow,ncol});
                    vis[nrow][ncol] = 1;
                }
            }


        }

        for(int i =0 ; i<n;i++){
            for(int j =0;j<m;j++){
                if(vis[i][j] == 1){
                    board[i][j] = 'O';
                }
                else{
                    board[i][j] = 'X';
                }
            }
        }
    }
};
