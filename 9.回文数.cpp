/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        vector<int> digits;
        while (x) {
            digits.push_back(x % 10);
            x /= 10;
        }
        for (int i = 0; i < digits.size() / 2; i++) {
            if (digits[i] != digits[digits.size() - 1 - i]) return false;
        }
        return true;
    }
};
// @lc code=end

