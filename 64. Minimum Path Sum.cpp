class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
       int i = 0, j = 0;
        for(i = 1; i < m; i++)
       {
            grid[i][0] = grid[i-1][0] + grid[i][0];
       }
        for(j = 1; j < n; j++)
       {
            grid[0][j] = grid[0][j-1] + grid[0][j];
       }
       for(int i = 1; i < m; i++)
       {
           for(int j = 1; j < n; j++)
           {
               grid[i][j] = min(grid[i-1][j], grid[i][j-1]) + grid[i][j];
           }
       }
        return grid[m-1][n-1];
    }
};