/*
 * @lc app=leetcode.cn id=414 lang=cpp
 *
 * [414] 第三大的数
 */

// @lc code=start
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> q;
        set<int> s;
        for (int i : nums) {
            if (s.find(i) != s.end()) continue;
            q.push(i);
            s.insert(i);
            if (q.size() > 3) {
                s.erase(q.top());
                q.pop();
            }
        }
        if (q.size() < 3) {
            int m = q.top();
            while (!q.empty()) {
                m = max(m, q.top());
                q.pop();
            }
            return m;
        }
        return q.top();
    }
};
// @lc code=end

