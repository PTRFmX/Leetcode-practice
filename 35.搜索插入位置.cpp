/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for (auto it = nums.begin(); it != nums.end();) {
            if (*it < target) {
                it++;
            }
            else {
                return it - nums.begin();
            }
        }
        return nums.size();
    }
};
// @lc code=end

