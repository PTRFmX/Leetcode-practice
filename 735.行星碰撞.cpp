/*
 * @lc app=leetcode.cn id=735 lang=cpp
 *
 * [735] 行星碰撞
 */

// @lc code=start
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        for (int i : asteroids) {
            if (i < 0 && !s.empty()) {
                if (s.top() > 0 && s.top() > abs(i)) continue;
                else if (s.top() < 0) s.push(i);
                else {
                    while (!s.empty() && s.top() > 0 && s.top() < abs(i)) {
                        s.pop();
                    }
                    if (s.empty()) {
                        s.push(i);
                        continue;
                    }
                    else if (s.top() > 0 && s.top() == abs(i)) s.pop();
                    else if (s.top() < 0) s.push(i);
                }
            }
            else s.push(i);
        }
        if (s.empty()) return {};
        int i = 0, len = s.size();
        vector<int> ans(len);
        while (!s.empty()) {
            ans[len - 1 - i++] = s.top();
            s.pop();
        }
        return ans;
    }
};
// @lc code=end

