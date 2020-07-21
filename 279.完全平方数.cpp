/*
 * @lc app=leetcode.cn id=279 lang=cpp
 *
 * [279] 完全平方数
 */

// @lc code=start
class Solution {
public:
    int numSquares(int n) {
        vector<int> sqrs;
        for (int i = 1; i <= sqrt(n); i++) sqrs.push_back(i * i);
        for (int i = 1; i <= n; i++) if (canDivide(n, i, sqrs)) return i;
        return -1;
    }

    /**
     * Determine if n can be splited into <count> # of squares 
     * @param n Target value
     * @param count Remaining number of squares
     * @return True if n can be divided within count
    */
    bool canDivide(int n, int count, vector<int> sqrs) {
        if (count == 1) return find(sqrs.begin(), sqrs.end(), n) != sqrs.end();
        for (int i : sqrs) if (canDivide(n - i, count - 1, sqrs)) return true;
        return false;
    }
};
// @lc code=end

