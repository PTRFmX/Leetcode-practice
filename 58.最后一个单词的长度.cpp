/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length();
        if (!len) { return 0; }
        bool emptyEnd = true;
        for (int i = len - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                emptyEnd = false;
            }
            if (s[i] == ' ' && !emptyEnd) {
                return len - 1 - i;
            }
            else if (emptyEnd) {
                len--;
            }
        }
        return len;
    }
};
// @lc code=end

