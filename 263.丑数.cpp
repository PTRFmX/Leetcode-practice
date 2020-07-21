/*
 * @lc app=leetcode.cn id=263 lang=cpp
 *
 * [263] 丑数
 */

// @lc code=start
class Solution {
public:
    bool isUgly(int num) {
        if (num <= 0) return false;
        if (num == 1) return true;
        int w[3] = {2, 3, 5};
        int start = 0;
        while (start < 3) {
            while (num % w[start] == 0) num /= w[start];
            if (num == 1) return true;
            else start++;
        }
        return false;
    }
};
// @lc code=end

