/*
 * @lc app=leetcode.cn id=55 lang=cpp
 *
 * [55] 跳跃游戏
 */

// @lc code=start
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int f = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i <= f) {
                f = max(f, i + nums[i]);
                if (f >= nums.size() - 1) return true;
            }
        }
        return false;
    }
};
// @lc code=end

