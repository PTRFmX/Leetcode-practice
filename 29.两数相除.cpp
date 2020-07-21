/*
 * @lc app=leetcode.cn id=29 lang=cpp
 *
 * [29] 两数相除
 */

// @lc code=start
class Solution {
public:
    int divide(int dividend, int divisor) {
        int count = 1;
        while (total != dividend) {
            if (total < dividend) {
                total += pow(divisor, count);   
            }
            else {
                total -= pow(divisor, count);
            }
            if (abs(dividend - total) > abs(pow(divisor, count))) count++;
            else count--;
        }
        return count;
    }
};
// @lc code=end

