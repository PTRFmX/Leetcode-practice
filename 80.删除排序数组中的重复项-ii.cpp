/*
 * @lc app=leetcode.cn id=80 lang=cpp
 *
 * [80] 删除排序数组中的重复项 II
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (!nums.size()) return 0;
        int count = 0, curr = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == curr && ++count > 2) {
                nums.erase(nums.begin() + i--);
            }
            else if (nums[i] != curr) {
                curr = nums[i];
                count = 1;
            }
        }
        return nums.size();
    }
};
// @lc code=end

