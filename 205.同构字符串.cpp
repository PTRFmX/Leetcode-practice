/*
 * @lc app=leetcode.cn id=205 lang=cpp
 *
 * [205] 同构字符串
 */

// @lc code=start
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> st;
        unordered_map<char, char> ts;
        int len = s.length();
        for (int i = 0; i < len; i++) {
            auto it = st.find(s[i]);
            if (it == st.end()) st.insert({s[i], t[i]});
            else if (it->second != t[i]) return false;
            it = ts.find(t[i]);
            if (it == ts.end()) ts.insert({t[i], s[i]});
            else if (it->second != s[i]) return false;
        }
        return true;
    }
};
// @lc code=end

