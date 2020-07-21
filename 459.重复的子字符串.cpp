/*
 * @lc app=leetcode.cn id=459 lang=cpp
 *
 * [459] 重复的子字符串
 */

// @lc code=start
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        vector<string> candidates;
        for (int i = 1; i <= s.length() / 2; i++) {
            if (s.substr(0, i) == s.substr(s.length() - i, i)) {
                candidates.push_back(s.substr(0, i));
            }
        }
        for (string str : candidates) {
            if (matchCandidate(s, str)) return true;
        }
        return false;
    }

    bool matchCandidate(string s, string c) {
        int len = c.length();
        if (!len) return false;
        for (int i = 0; i < s.length(); i += len) {
            if (s.substr(i, len) != c) return false;
        }
        return true;
    }
};
// @lc code=end

