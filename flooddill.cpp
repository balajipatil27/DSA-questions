class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        int originalColor = image[sr][sc];
        if (originalColor == color) return image;

        queue<pair<int,int>> q;
        image[sr][sc] = color;
        q.push({sr,sc});

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            int delrow[] = {0,-1,0,1};
            int delcol[] = {-1,0,1,0};
            for(int i =0;i<4;i++){
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                if(nrow < n && nrow>=0 && ncol<m && ncol>=0 && image[nrow][ncol] == originalColor ){
                    q.push({nrow,ncol});
                    image[nrow][ncol] = color;
                }
            }
        }
        return image;
    }
};
