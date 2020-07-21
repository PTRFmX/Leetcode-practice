/*
 * @lc app=leetcode.cn id=54 lang=cpp
 *
 * [54] 螺旋矩阵
 */

// @lc code=start
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (!matrix.size()) return {};
        if (matrix.size() == 1) return matrix[0];
        int m = matrix.size(), n = matrix[0].size(), count = 0;
        vector<bool> v_row(n, false);
        vector<vector<bool>> visited(m, v_row);
        vector<int> res;
        int row = 0, col = 0;
        while (count < m * n) {
            while (col < n - 1 && !visited[row][col]) {
                visited[row][col] = true;
                res.push_back(matrix[row][col]);
                count++;
                if (!visited[row][col + 1]) col++;
                else {
                    row++;
                    break;
                }
            }
            while (row < m - 1 && !visited[row][col]) {
                visited[row][col] = true;
                res.push_back(matrix[row][col]);
                count++;
                if (!visited[row + 1][col]) row++;
                else {
                    col--;
                    break;
                }
            }
            while (col > 0 && !visited[row][col]) {
                visited[row][col] = true;
                res.push_back(matrix[row][col]);
                count++;
                if (!visited[row][col - 1]) col--;
                else {
                    row--;
                    break;
                }
            }
            while (row > 0 && !visited[row][col]) {
                visited[row][col] = true;
                res.push_back(matrix[row][col]);
                count++;
                if (!visited[row - 1][col]) row--;
                else {
                    col++;
                    break;
                }
            }
        }
        return res;
    }
};
// @lc code=end

