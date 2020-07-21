/*
 * @lc app=leetcode.cn id=67 lang=cpp
 *
 * [67] 二进制求和
 */

// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {
        if (!a.length() || !b.length()) {
            return a.length() ? a : b;
        }
        string result = "";
        bool longer = a.length() > b.length();
        if (longer) {
            while(b.length() < a.length()) {
                b.insert(0, "0");
            }
        }
        else {
            while(a.length() < b.length()) {
                a.insert(0, "0");
            }
        }
        int carry = 0;
        for (int i = a.length() - 1; i >= 0; i--) {
            int a1 = a[i] - '0';
            int b1 = b[i] - '0';
            int current = a1 + b1 + carry;
            result.insert(0, current % 2 ? "1" : "0");
            carry = (current >= 2);
        }
        if (carry) {
            result.insert(0, "1");
        }
        return result;
    }
};
// @lc code=end

