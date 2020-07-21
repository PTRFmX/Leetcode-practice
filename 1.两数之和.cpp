/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> remainders; // {target - value, index}
        for (int i = 0; i < nums.size(); i++) {
            auto it = remainders.find(nums[i]);
            if (it != remainders.end()) return {it->second, i};
            remainders.insert({target - nums[i], i});
        }
        return {};
    }
};
// @lc code=end

