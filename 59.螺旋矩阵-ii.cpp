/*
 * @lc app=leetcode.cn id=59 lang=cpp
 *
 * [59] 螺旋矩阵 II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int ans[n][n];
        bool visited[n][n];
        memset(visited, 0, sizeof(visited)); // MUST INITIALIZE BOOL ARRAY
        int row = 0, col = 0, count = 1, i = 0;
        while (count < n * n) {
            bool skip = true;
            // left -> right
            while (col < n - 1 - i && !visited[row][col]) {
                skip = false;
                ans[row][col] = count++;
                visited[row][col++] = true;
            }
            // top -> down
            while (row < n - 1 - i && !visited[row][col]) {
                skip = false;
                ans[row][col] = count++;
                visited[row++][col] = true;
            }
            // right -> left
            while (col > 0 + i && !visited[row][col]) {
                skip = false;
                ans[row][col] = count++;
                visited[row][col--] = true;
            }
            // down -> top
            while (row > 0 + i && !visited[row][col]) {
                skip = false;
                ans[row][col] = count++;
                visited[row--][col] = true;
            }
            i++;
            row++;
            col++;
            if (skip) break;
        }
        if (n % 2) ans[n / 2][n / 2] = count;
        vector<vector<int>> res;
        for (int i = 0; i < n; i++) {
            res.push_back({});
            for (int j = 0; j < n; j++) res[i].push_back(ans[i][j]);
        }
        return res;
    }
};
// @lc code=end

