/*
 * @lc app=leetcode.cn id=204 lang=cpp
 *
 * [204] 计数质数
 */

// @lc code=start
class Solution {
public:
    int countPrimes(int n) {
        int res = 0;
        vector<bool> v(n, false);
        if (n > 2) res++;
        for (int i = 3; i < n; i += 2) {
            if (!v[i]) {
                for (int j = 3; i * j < n; j += 2) {
                    v[i * j] = true;
                }
                res++;
            }
        }
        return res;
    }
};
// @lc code=end

