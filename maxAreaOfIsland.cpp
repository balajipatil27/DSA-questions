class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0)); 
        int maxi = 0;

        int delrow[] = {1, 0, -1, 0};
        int delcol[] = {0, 1, 0, -1};

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1 && !vis[i][j]) {
                    
                    queue<pair<int, int>> q;
                    q.push({i, j});
                    vis[i][j] = 1;
                    int area = 0;
                    while (!q.empty()) {
                        int row = q.front().first;
                        int col = q.front().second;
                        q.pop();
                        area++;

                        for (int k = 0; k < 4; k++) {
                            int nr = row + delrow[k];
                            int nc = col + delcol[k];

                            if (nr >= 0 && nr < n && nc >= 0 && nc < m &&
                                grid[nr][nc] == 1 && !vis[nr][nc]) {
                                vis[nr][nc] = 1;
                                q.push({nr, nc});
                            }
                        }
                    }
                    maxi = max(maxi, area);
                }
            }
        }
        return maxi;
    }
};
