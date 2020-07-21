/*
 * @lc app=leetcode.cn id=441 lang=cpp
 *
 * [441] 排列硬币
 */

// @lc code=start
class Solution {
public:
    int arrangeCoins(int n) {
        int i;
        for (i = 1; i <= n; i++) n -= i;
        return i - 1;
    }

    int arrangeCoinsOrig(int n) {
        if (!n) return n;
        long count = 1, sum = 1;
        while (sum + (count + 1) <= n) {
            count++;
            sum += count;
        }
        return count;
    }
};
// @lc code=end

