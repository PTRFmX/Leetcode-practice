/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        if (!x) return x;
        for (int i = 2; i <= x / 2 + 1; i++) {
            if (x / i == i && !(x % i)) { 
                return i;
            }
            else if (x / i < i) {
                return i - 1;
            }
        }
        return 1;
    }
};
// @lc code=end

