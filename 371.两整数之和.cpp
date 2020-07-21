/*
 * @lc app=leetcode.cn id=371 lang=cpp
 *
 * [371] 两整数之和
 */

// @lc code=start
class Solution {
public:
    int getSum(int a, int b) {
        if (!a || !b) return a ? a : b;
        while (b) {
            int tmp = a ^ b;
            b = ((unsigned int) a & b) << 1;
            a = tmp;
        }
        return a;
    }
};
// @lc code=end

