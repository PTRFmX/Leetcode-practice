/*
 * @lc app=leetcode.cn id=448 lang=cpp
 *
 * [448] 找到所有数组中消失的数字
 */

// @lc code=start
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // 标记法 Mark all visited number -> index (-1)
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[abs(nums[i]) - 1] > 0) nums[abs(nums[i]) - 1] = -nums[abs(nums[i]) - 1];
        }
        vector<int> ans;
        for (int i = 0; i < nums.size(); ++i) if (nums[i] > 0) ans.push_back(i + 1);
        return ans;
    }
};
// @lc code=end

