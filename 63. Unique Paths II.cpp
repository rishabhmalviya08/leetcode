class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacle) {
        int m = obstacle[0].size();
        int n = obstacle.size();
        if(obstacle[0][0] == 1) return 0;
        obstacle[0][0] = 1;
        for(int i = 1; i < n; i++)
        {
            obstacle[i][0] = obstacle[i][0] == 1 ? 0 : obstacle[i-1][0];
        }
        for(int j = 1; j < m; j++)
        {
            obstacle[0][j] = obstacle[0][j] == 1 ? 0 : obstacle[0][j-1];
        }
        for(int i = 1; i < n; i++)
        {
            for(int j = 1; j < m; j++)
            {
                obstacle[i][j] = obstacle[i][j] != 1 ? obstacle[i-1][j] + obstacle[i][j-1] : 0;
            }
        }
        return obstacle[n-1][m-1];
    }
};