/*
 * @lc app=leetcode.cn id=520 lang=cpp
 *
 * [520] 检测大写字母
 */

// @lc code=start
class Solution {
public:
    bool detectCapitalUse(string word) {
        string word_s = word.substr(1);
        string l = word_s, u = word_s;
        transform(l.begin(), l.end(), l.begin(), ::tolower);
        if (word[0] >= 'a') return word_s == l;
        transform(u.begin(), u.end(), u.begin(), ::toupper);
        return word_s == l || word_s == u;
    }
};
// @lc code=end

