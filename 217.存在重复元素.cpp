/*
 * @lc app=leetcode.cn id=217 lang=cpp
 *
 * [217] 存在重复元素
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> u_nums;
        for (int i : nums) {
            if (u_nums.find(i) != u_nums.end()) return true;
            u_nums.insert(i);
        }
        return false;
    }
};
// @lc code=end

