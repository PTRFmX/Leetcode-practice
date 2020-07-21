/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 1) { return nums.size(); }
        for (auto it = nums.begin() + 1; it != nums.end();) {
            if (*it == *(it - 1)) {
                nums.erase(it);
            }
            else {
                it++;
            }
        }
        return nums.size();
    }
};
// @lc code=end

