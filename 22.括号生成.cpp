/*
 * @lc app=leetcode.cn id=22 lang=cpp
 *
 * [22] 括号生成
 */

// @lc code=start
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>* res = new vector<string>;
        stack<char> s;
        generateParenthesis(res, s, n, n, "");
        return *res;
    }

    void generateParenthesis(vector<string>* res, stack<char> s, int fr, int br, string curr) {
        if (s.empty() && !fr && !br) {
            res->push_back(curr);
            return;
        }
        // Push '('
        if (fr > 0) {
            s.push('(');
            generateParenthesis(res, s, fr - 1, br, curr + '(');
            s.pop();
        }
        // Push ')'
        if (!s.empty() && s.top() == '(' && br > 0) {
            s.pop();
            generateParenthesis(res, s, fr, br - 1, curr + ')');
        }
    }
};
// @lc code=end

