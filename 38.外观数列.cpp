/*
 * @lc app=leetcode.cn id=38 lang=cpp
 *
 * [38] 报数
 */

// @lc code=start
class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        while (--n > 0) {
            vector<pair<char, int>> v;
            int count = 0;
            char curr = s[0];
            for (int i = 0; i < s.length(); i++) {
                if (curr != s[i]) {
                    curr = s[i];
                    v.push_back(make_pair(s[i - 1], count));
                    count = 0;
                }
                count++;
            }
            v.push_back(make_pair(curr, count));
            s = "";
            for (pair<int, int> p : v) {
                char val = p.first;
                int occ = p.second;
                s += to_string(occ) + val;
            }
        }
        return s;
    }
};
// @lc code=end

