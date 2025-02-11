/*
 * @lc app=leetcode.cn id=367 lang=cpp
 *
 * [367] 有效的完全平方数
 */

// @lc code=start
class Solution {
public:
    bool isPerfectSquare(int num) {
        int sqrt = 1;
        while (num / sqrt > sqrt) sqrt++;
        return num / sqrt == sqrt && !(num % sqrt);
    }
};
// @lc code=end

