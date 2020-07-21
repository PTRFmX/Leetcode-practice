/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */
// 1534236469
// @lc code=start
class Solution {
public:
    int reverse(int x) {
        if (x == INT_MIN) { return 0; }
        vector<int> digits;
        int n = 10, result = 0;
        int temp = abs(x);
        while (temp / n != 0) {
            int digit = temp % n;
            digits.push_back(digit);
            temp /= n;
        }
        digits.push_back(temp);
        if (digits.size() >= 10 && digits[0] > 2) {
            return 0;
        }
        for (int i = 0; i < digits.size(); i++) {
            if (x < 0) {
                digits[i] = digits[i] - 2 * digits[i];
            }
            int newValue = digits[i] * pow(10, digits.size() - 1 - i);
            if (newValue > 0 && INT_MAX - newValue < result || newValue < 0 && INT_MIN - newValue > result) {
                return 0;
            }
            result += newValue;
        }
        return result;
    }
};
// @lc code=end

