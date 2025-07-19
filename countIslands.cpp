class Solution {
public:
    int countIslands(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> vis(n, vector<bool>(m, false));
        int cnt = 0;

        int dr[] = {0, 1, 0, -1}; 
        int dc[] = {1, 0, -1, 0};

        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < m; ++j) {
                if(grid[i][j] != 0 && !vis[i][j]) {
                    long long sum = 0;
                    queue<pair<int, int>> q;
                    q.push({i, j});
                    vis[i][j] = true;
                    
                    while(!q.empty()) {
                        auto [row, col] = q.front();
                        q.pop();
                        sum += grid[row][col];

                        for(int d = 0; d < 4; ++d) {
                            int nr = row + dr[d];
                            int nc = col + dc[d];
                            if(nr >= 0 && nr < n && nc >= 0 && nc < m &&
                               !vis[nr][nc] && grid[nr][nc] != 0) {
                                q.push({nr, nc});
                                vis[nr][nc] = true;
                            }
                        }
                    }

                    if(sum %k == 0) cnt++;
                }
            }
        }
        return cnt;
    }
};
