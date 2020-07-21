/*
 * @lc app=leetcode.cn id=387 lang=cpp
 *
 * [387] 字符串中的第一个唯一字符
 */

// @lc code=start
class Solution {
public:
    // 16.62 / 100
    int firstUniqChar(string s) {
        unordered_map<char, int> m;
        for (char c : s) {
            if (m.find(c) == m.end()) m.insert({c, 1});
            else m[c]++;
        }
        for (int i = 0; i < s.length(); i++) if (m[s[i]] == 1) return i;
        return -1;
    }
    // 5.91 / 100
    int firstUniqCharInitSol(string s) {
        set<char> all, rej;
        queue<int> q;
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if (all.find(c) == all.end()) {
                all.insert(c);
                q.push(i);
            }
            else rej.insert(c);
        }
        while (!q.empty()) {
            if (rej.find(s[q.front()]) == rej.end()) break;
            q.pop();
        }
        return q.empty() ? -1 : q.front();
    }
};
// @lc code=end

