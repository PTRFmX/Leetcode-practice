/*
 * @lc app=leetcode.cn id=78 lang=cpp
 *
 * [78] 子集
 */

// @lc code=start
class Solution {
public:

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>>* s = new set<vector<int>>;
        calculateSubsets(nums, s);
        for (auto it = s->begin(); it != s->end(); it++) {
            ans.push_back(*it);
        }
        ans.push_back(nums);
        return ans;
    }

    void calculateSubsets(vector<int>& nums, set<vector<int>>* s) {
        if (!nums.size()) return;
        if (s->find(nums) != s->end()) return;
        for (auto it = nums.begin(); it != nums.end(); it++) {
            vector<int> tmp = nums;
            nums.erase(it);
            calculateSubsets(nums, s);
            s->insert(nums);
            nums = tmp;
        }
    }
};
// @lc code=end

