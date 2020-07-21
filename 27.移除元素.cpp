/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.size() <= 0) { return nums.size(); }
        for (auto it = nums.begin(); it != nums.end();) {
            if (*it == val) {
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

