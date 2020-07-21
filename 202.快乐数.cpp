/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */

// @lc code=start
class Solution {
public:
    bool isHappy(int n) {
        int t = 0, slow_p = slow(n), fast_p = fast(n);
        while (slow_p != 1 && fast_p != 1) {
            if (slow_p == fast_p) return false;
            slow_p = slow(slow_p);
            fast_p = fast(fast_p);
        }
        return true;
    }

    int slow(int n) {
        int ans = 0;
        while (n) {
            ans += (n % 10) * (n % 10);
            n /= 10;
        }
        return ans;
    }

    int fast(int n) {
        return slow(slow(n));
    }
};
// @lc code=end

