/*
 * @lc app=leetcode.cn id=415 lang=cpp
 *
 * [415] 字符串相加
 */

// @lc code=start
class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans, l = num2, s = num1;
        if (num1.length() > num2.length()) {
            l = num1;
            s = num2;
        }
        int len = s.length(), l_len = l.length();
        int carry = 0, res = 0;
        for (int i = 0; i < len; i++) {
            int sum = l[l_len - 1 - i] - '0' + s[len - 1 - i] - '0' + carry;
            carry = sum / 10, res = sum % 10;
            ans.insert(0, to_string(res));
        }
        if (l_len == len && carry) {
            ans.insert(0, to_string(carry));
            return ans;
        }
        int r = l_len - len - 1;
        while (r >= 0 && carry) {
            int sum = l[r] - '0' + carry;
            carry = sum / 10;
            ans.insert(0, to_string(sum % 10));
            r--;
        }
        if (r >= 0) ans.insert(0, l.substr(0, r + 1));
        else if (carry) ans.insert(0, to_string(carry));
        return ans;
    }
};
// @lc code=end

