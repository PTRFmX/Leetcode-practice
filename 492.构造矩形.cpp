/*
 * @lc app=leetcode.cn id=492 lang=cpp
 *
 * [492] 构造矩形
 */

// @lc code=start
class Solution {
public:
    vector<int> constructRectangle(int area) {
        int w, l;
        for (int i = 1; i <= sqrt(area); i++) {
            if (area % i == 0) {
                w = i;
                l = area / i;
            }
        }
        return {l, w};
    }
};
// @lc code=end

