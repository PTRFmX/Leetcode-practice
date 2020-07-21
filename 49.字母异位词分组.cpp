/*
 * @lc app=leetcode.cn id=49 lang=cpp
 *
 * [49] 字母异位词分组
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> patterns;
        for (string str : strs) {
            string tmp = str;
            sort(tmp.begin(), tmp.end());
            patterns[tmp].push_back(str);
        }
        for (auto it = patterns.begin(); it != patterns.end(); it++) ans.push_back(it->second);
        return ans;
    }
};
// @lc code=end

