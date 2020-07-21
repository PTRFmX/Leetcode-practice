/*
 * @lc app=leetcode.cn id=75 lang=cpp
 *
 * [75] 颜色分类
 */

// @lc code=start
class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> res(nums.size(), 1);
        int begin = 0, end = nums.size() - 1;
        for (int i : nums) {
            switch (i) {
                case 0:
                    res[begin++] = 0;
                    break;
                case 2:
                    res[end--] = 2;
                    break;
                default:
                    break;
            }
        }
        nums = res;
    }
};
// @lc code=end

