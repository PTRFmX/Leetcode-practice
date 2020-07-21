/*
 * @lc app=leetcode.cn id=120 lang=cpp
 *
 * [120] 三角形最小路径和
 */

// @lc code=start
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int len = triangle.size();
        if (!len) return -1;
        int ans = triangle[0][0];
        for (int i = 1; i < len; i++) {
            int curr_len = triangle[i].size();
            triangle[i][0] += triangle[i - 1][0];
            for (int j = 1; j < curr_len - 1; j++) {
                triangle[i][j] += min(triangle[i - 1][j - 1], triangle[i - 1][j]);
            }
            triangle[i][curr_len - 1] += triangle[i - 1][curr_len - 1];
        }
        for (int i = 0; i < triangle[len - 1].size(); i++) {
            if (ans > triangle[len - 1][i]) ans = triangle[len - 1][i];
        }
        return ans;
    }
};
// @lc code=end

