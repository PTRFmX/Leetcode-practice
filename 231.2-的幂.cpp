/*
 * @lc app=leetcode.cn id=231 lang=cpp
 *
 * [231] 2的幂
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n < 0) return false;
        int ans = 0;
        for (int i = 0; i < 31; i++) ans += (n >> i) & 1; 
        return ans == 1;
    }
};
// @lc code=end

