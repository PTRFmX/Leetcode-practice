/*
 * @lc app=leetcode.cn id=274 lang=cpp
 *
 * [274] H 指数
 */

// @lc code=start
class Solution {
public:
    int hIndex(vector<int>& citations) {
        unordered_map<int, int> m; // {# of times cited, # of papers}
        sort(citations.begin(), citations.end());
        for (int i : citations) {
            m.insert({i, 0});
            for (auto it = m.begin(); it != m.end(); it++) if (it->first <= i) it->second++;
        }
        int h = 0;
        for (auto it = m.begin(); it != m.end(); it++) h = max(h, min(it->first, it->second));
        return h;
    }
};
// @lc code=end

