/*
 * @lc app=leetcode.cn id=46 lang=cpp
 *
 * [46] 全排列
 */

// @lc code=start
class Solution {
    public:
        vector<vector<int>> permute(vector<int>& nums) {
            unsigned int len = nums.size();
            vector<vector<int>>* res = new vector<vector<int>>;
            if (!len) return *res;
            vector<int>* path = new vector<int>;
            vector<bool> visited(len, false);
            dfs(res, path, visited, len, 0, nums);
            return *res;
        }

        void dfs(vector<vector<int>>* res, vector<int>* path, vector<bool> visited,
                unsigned int len, unsigned int depth, vector<int> nums) {
            if (depth == len) {
                res->push_back(*path);
                return;
            }
            for (int i = 0; i < len; i++) {
                if (visited[i]) continue;
                path->push_back(nums[i]);
                visited[i] = true;
                dfs(res, path, visited, len, depth + 1, nums);
                visited[i] = false;
                path->pop_back();
            }
        }
};
// @lc code=end

