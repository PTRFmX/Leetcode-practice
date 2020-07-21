/*
 * @lc app=leetcode.cn id=344 lang=cpp
 *
 * [344] 反转字符串
 */

// @lc code=start
class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = s.size();
        if (!len) return;
        for (int i = 0; i < len / 2; i++) {
            if (s[i] == s[len - 1 - i]) continue;
            char c = s[i];
            s[i] = s[len - 1 - i];
            s[len - 1 - i] = c;
        }
    }
};
// @lc code=end

