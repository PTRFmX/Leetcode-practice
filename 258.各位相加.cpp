/*
 * @lc app=leetcode.cn id=258 lang=cpp
 *
 * [258] 各位相加
 */

// @lc code=start
class Solution {
public:
    int addDigits(int num) {
        while (num / 10) num = addSingleNum(num);
        return num;
    }

    int addSingleNum(int n) {
        int ans = 0;
        while (n) {
            ans += n % 10;
            n /= 10;
        }
        return ans;
    }
};
// @lc code=end

