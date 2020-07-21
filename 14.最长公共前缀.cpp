/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) { return ""; }
        if (strs.size() == 1) { return strs[0]; }
        string first = strs[0], result = "";
        for (int i = 1; i <= first.length(); i++) {
            string substr = first.substr(0, i);
            bool success = true;
            for (int j = 1; j < strs.size(); j++) {
                if (strs[j].substr(0, i) != substr) {
                    success = false;
                    break;
                }
            }
            if (success) { result = substr; }
        }
        return result;
    }
};
// @lc code=end

