/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if (!numRows) return {};
        if (numRows == 1) return {{1}};
        if (numRows == 2) return {{1}, {1, 1}};
        vector<vector<int>> result = generate(numRows - 1);
        vector<int> lastRow = result[result.size() - 1], currentRow = {1};
        for (int i = 0; i < lastRow.size() - 1; i++) {
            currentRow.push_back(lastRow[i] + lastRow[i + 1]);
        }
        currentRow.push_back(1);
        result.push_back(currentRow);
        return result;
    }
};
// @lc code=end

