/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            switch (c) {
                case ')':
                    if (!st.empty() && st.top() == '(') st.pop();
                    else st.push(c);
                    break;
                case ']':
                    if (!st.empty() && st.top() == '[') st.pop();
                    else st.push(c);
                    break;
                case '}':
                    if (!st.empty() && st.top() == '{') st.pop();
                    else st.push(c);
                    break;
                default:
                    st.push(c);
            }
        }
        return st.empty();
    }
};
// @lc code=end

