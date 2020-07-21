/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (!nums[i]) {
                count++;
                nums.erase(nums.begin() + i--);
            }
        }
        for (int i = 0; i < count; i++) nums.push_back(0);
    }
};
// @lc code=end

