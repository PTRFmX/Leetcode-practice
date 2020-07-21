/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        if (!height.size()) return 0;
        int left = 0, right = height.size() - 1, max_a = 0;
        while (left < right) {
            max_a = max(max_a, min(height[right], height[left]) * (right - left));
            if (height[left] <= height[right]) left++;
            else right--;
        }
        return max_a;
    }
};
// @lc code=end

