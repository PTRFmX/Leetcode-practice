/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (!carry) {
                return digits;
            }
            digits[i] += carry;
            if (digits[i] >= 10) {
                digits[i] -= 10;
                carry = 1;
            }
            else {
                carry = 0;
            }

            if (carry && !i) {
                digits.insert(digits.begin(), 1);
                break;
            }
        }
        return digits;
    }
};
// @lc code=end

