/*
 * @lc app=leetcode.cn id=172 lang=cpp
 *
 * [172] 阶乘后的零
 */

// @lc code=start
class Solution {
public:
    int trailingZeroes(int n) {
        int k = 1, ans = 0;
        while (pow(5, k) <= n) ans += n / pow(5, k++);
        return ans;
    }
};
// @lc code=end

