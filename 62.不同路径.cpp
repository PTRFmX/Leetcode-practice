/*
 * @lc app=leetcode.cn id=62 lang=cpp
 *
 * [62] 不同路径
 */

// @lc code=start
class Solution {
public:
    int uniquePaths(int m, int n) {
        if (!m && !n) return 1;
        int grid[m][n];
        grid[0][0] = 1;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0) {
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

