/*
 * @lc app=leetcode.cn id=63 lang=cpp
 *
 * [63] 不同路径 II
 */

// @lc code=start
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        if (m == 0) return 0;
        int n = obstacleGrid[0].size();
        int grid[m][n];
        grid[0][0] = 1;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (obstacleGrid[i][j] == 1) grid[i][j] = 0;
                else if (i == 0) {
                    if (j == 0) continue;
                    grid[i][j] = grid[i][j - 1];
                }
                else if (j == 0) {
                    grid[i][j] = grid[i - 1][j];
                }
                else grid[i][j] = grid[i][j - 1] + grid[i - 1][j];
            }
        }
        return grid[m - 1][n - 1];
    }
};
// @lc code=end

