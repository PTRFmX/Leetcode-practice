/*
 * @lc app=leetcode.cn id=122 lang=cpp
 *
 * [122] 买卖股票的最佳时机 II
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        if (!len) return 0;
        int res = 0, low = 0, high = 0;
        for (int i = 1; i < len - 1; i++) {
            if (prices[low] > prices[i]) {
                low = i; 
                high = i;
            }
            if (prices[high] < prices[i]) high = i;
            // Decrease
            if (prices[i + 1] < prices[i]) {
                res += prices[high] - prices[low];
                low = i + 1;
                high = i + 1;
            }
        }
        res += prices[prices[len - 1] > prices[high] ? len - 1 : high] - prices[low];
        return res;
    }
};
// @lc code=end

