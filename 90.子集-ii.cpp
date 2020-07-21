/*
 * @lc app=leetcode.cn id=90 lang=cpp
 *
 * [90] 子集 II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        dfs(0, &ans, {}, nums);
        return ans;
    }

    void dfs(int level, vector<vector<int>>* ans, vector<int> curr, vector<int> nums) {
        ans->push_back(curr);
        if (level == nums.size()) return;
        for (int i = level; i < nums.size(); i++) {
            if (i > level && nums[i] == nums[i - 1]) continue;
            curr.push_back(nums[i]);
            dfs(i + 1, ans, curr, nums);
            curr.pop_back();
        }
    }
};
// @lc code=end

