/*
 * @lc app=leetcode.cn id=326 lang=cpp
 *
 * [326] 3的幂
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n == 1) return true;
        if (n % 3 || n < 1) return false;
        return isPowerOfThree(n / 3);
    }
};
// @lc code=end

