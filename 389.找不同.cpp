/*
 * @lc app=leetcode.cn id=389 lang=cpp
 *
 * [389] 找不同
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {
        int s_s = 0, t_s = 0;
        for (int i = 0; i < s.length(); i++) {
            s_s += s[i];
            t_s += t[i];
        }
        t_s += t[s.length()];
        return (char) (t_s - s_s);
    }
};
// @lc code=end

