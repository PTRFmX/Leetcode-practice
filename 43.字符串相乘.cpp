/*
 * @lc app=leetcode.cn id=43 lang=cpp
 *
 * [43] 字符串相乘
 */

// @lc code=start
class Solution {
public:
    string multiply(string num1, string num2) {
        string ans;
        for (int i = 0; i < num1.length(); i++) {
            int multiplier = num1[i] - 48;
            if (!multiplier) continue;
            int carrier = 0;
            for (int j = 0; j < num2.length(); j++) {
                int curr_val = multiplier * (num2[j] - 48) + carrier;
                if (curr_val > 9) carrier = curr_val / 10;
                curr_val = curr_val % 10;
                
            }
        }
    }
};
// @lc code=end

