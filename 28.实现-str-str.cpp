/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        int len = needle.length();
        if (len > haystack.length()) { return -1; }
        for (int i = 0; i <= haystack.length() - len; i++) {
            if (haystack.substr(i, len) == needle) {
                return i;
            }
        }
        return -1;
    }
};
// @lc code=end

