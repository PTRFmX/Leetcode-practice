/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        if (!len) return 0;
        int res = 0, low = 0, high = 0;
        for (int i = 1; i < len; i++) {
            bool ud = true;
            if (prices[low] > prices[i]) {
                low = i;
                high = i;
            }
            else if (prices[high] < prices[i]) {
                high = i;
            }
            else {
                ud = false;
            }
            if (ud) res = max(res, prices[high] - prices[low]);
        }
        return res;
    }
};
// @lc code=end

