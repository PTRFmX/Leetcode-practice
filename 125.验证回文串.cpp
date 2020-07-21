/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */

// @lc code=start
class Solution {
public:
    char isValidChar(char c) {
        if (c >= 48 && c <= 57 || c >= 65 && c <= 90) return c;
        if (c >= 97 && c <= 122) return c - 32;
        return 0;
    }

    bool isPalindrome(string s) {
        string l2r, r2l;
        for (char c : s) if ((c = isValidChar(c))) l2r += c;
        cout << l2r << endl;
        reverse(s.begin(), s.end());
        for (char c : s) if ((c = isValidChar(c))) r2l += c;
        cout << r2l << endl;
        return l2r == r2l;
    }
};
// @lc code=end

