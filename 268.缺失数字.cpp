/*
 * @lc app=leetcode.cn id=268 lang=cpp
 *
 * [268] 缺失数字
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        if (!n) return 0;
        int cr = n * (n + 1) / 2, total = 0;
        for (int i : nums) total += i;
        return cr - total;
    }
};
// @lc code=end

