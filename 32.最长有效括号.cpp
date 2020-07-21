/*
 * @lc app=leetcode.cn id=32 lang=cpp
 *
 * [32] 最长有效括号
 */

// @lc code=start
class Solution {
public:
    int longestValidParentheses(string s) {
        vector<int> st_sizes;
        stack<char> st;
        bool no_closing = true; // Prevent last test case TLE
        for (char c : s) {
            st_sizes.push_back(st.size());
            if (c == ')' && !st.empty() && st.top() == '(') {
                st.pop();
                no_closing = false;
            }
            else st.push(c);
        }
        if (no_closing) return 0;
        st_sizes.push_back(st.size());
        int len = st_sizes.size(), max_len = 0;
        for (int i = 0; i < len - 1; i++) {
            int count = 0, tmp = 0;
            for (int j = i + 1; j < len; j++) {
                // cout << st_sizes[j] << " ";
                if (st_sizes[j] < st_sizes[i]) break;
                tmp++;
                if (st_sizes[j] == st_sizes[i]) count = tmp;
            }
            max_len = max(count, max_len);
        }
        return max_len;
    }
};
// @lc code=end

