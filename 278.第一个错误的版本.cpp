/*
 * @lc app=leetcode.cn id=278 lang=cpp
 *
 * [278] 第一个错误的版本
 */

// @lc code=start
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long left = 1, right = n;
        if (right == INT_MAX) return right;
        long mid = (n + 1) / 2;
        // Special cases
        if (isBadVersion(1)) return 1;
        while (left < right - 1) {
            if (isBadVersion(mid)) right = mid;
            else left = mid;
            mid = (left + right) / 2;
        }
        return right;
    }
};
// @lc code=end

