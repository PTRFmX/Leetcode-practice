/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (!nums.size()) return 0;
        int sum = nums[0], max_sum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            sum = max(nums[i], sum + nums[i]);
            max_sum = max(max_sum, sum);
        }
        return max_sum;   
    }
};
// @lc code=end

