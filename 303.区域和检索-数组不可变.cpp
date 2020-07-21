/*
 * @lc app=leetcode.cn id=303 lang=cpp
 *
 * [303] 区域和检索 - 数组不可变
 */

// @lc code=start
class NumArray {
public:
    vector<int> v;

    NumArray(vector<int>& nums) : v(nums) {}

    int sumRange(int i, int j) {
        int ans = 0;
        for (int k = i; k <= j; k++) ans += v[k];
        return ans;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
// @lc code=end

