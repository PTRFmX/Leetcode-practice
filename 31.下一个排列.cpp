/*
 * @lc app=leetcode.cn id=31 lang=cpp
 *
 * [31] 下一个排列
 */

// @lc code=start
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int anchor = 0;
        bool reverse_all = true;
        for (int i = nums.size() - 1; i > 0; i--) {
            if (nums[i - 1] < nums[i]) {
                reverse_all = false;
                anchor = i - 1;
                break;
            }
        }
        if (reverse_all) {
            reverse(nums.begin(), nums.end());
            return;
        }
        int c = nums.size() - 1;
        for (int i = anchor + 1; i < nums.size(); i++) {
            if (nums[i] <= nums[anchor]) {
                c = i - 1;
                break;
            }
        }
        int tmp = nums[anchor];
        nums[anchor] = nums[c];
        nums[c] = tmp;
        reverse(nums.begin() + anchor + 1, nums.end());
    }
};
// @lc code=end

