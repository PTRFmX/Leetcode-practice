/*
 * @lc app=leetcode.cn id=507 lang=cpp
 *
 * [507] 完美数
 */

// @lc code=start
class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num <= 2) return false;
        int sqr = sqrt(num), tmp = num;
        for (int i = 2; i <= sqr; i++) {
            if (num % i == 0) {
                int a = num / i;
                tmp -= a;
                if (a != i) tmp -= i;
            }
        }
        return tmp == 1;
    }
};
// @lc code=end

