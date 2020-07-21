/*
 * @lc app=leetcode.cn id=39 lang=cpp
 *
 * [39] 组合总和
 */

// @lc code=start
class Solution {
public:

    void addCombinations(vector<vector<int>>* res, vector<int>* v, vector<int> candidates, int target, int index) {
        if (candidates.size() == 0) return;
        for (int i = index; i < candidates.size(); i++) {
            int curr_target = target;
            curr_target -= candidates[i];
            v->push_back(candidates[i]);
            if (curr_target == 0) {
                res->push_back(*v);
                v->pop_back();
                continue;
            }
            else if (curr_target < candidates[i]) {
                v->pop_back();
                continue;
            }
            else {
                addCombinations(res, v, candidates, curr_target, i);
                v->pop_back();
            }
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>* res = new vector<vector<int>>;
        vector<int>* v = new vector<int>;
        sort(candidates.begin(), candidates.end());
        addCombinations(res, v, candidates, target, 0);
        return *res;
    }
};
// @lc code=end

