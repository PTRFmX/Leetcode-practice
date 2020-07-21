/*
 * @lc app=leetcode.cn id=485 lang=cpp
 *
 * [485] 最大连续1的个数
 */

// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0, tmp = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (!nums[i]) {
                ans = max(ans, tmp);
                tmp = 0;
            }
            else tmp++;
        }
        return max(ans, tmp);
    }
};
// @lc code=end

