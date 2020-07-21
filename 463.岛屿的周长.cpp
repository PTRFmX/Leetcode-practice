/*
 * @lc app=leetcode.cn id=463 lang=cpp
 *
 * [463] 岛屿的周长
 */

// @lc code=start
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size(), ans = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j]) ans += singlePerimeter(grid, i, j);
            }
        }
        return ans;
    }

    int singlePerimeter(vector<vector<int>>& grid, int x, int y) {
        int m = grid.size(), n = grid[0].size(), p = 4;
        if (x - 1 >= 0) p -= grid[x - 1][y];
        if (x + 1 <= m - 1) p -= grid[x + 1][y];
        if (y - 1 >= 0) p -= grid[x][y - 1];
        if (y + 1 <= n - 1) p -= grid[x][y + 1];
        return p;
    }
};
// @lc code=end

