/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1, s2, ans;
        vector<int> res;
        for (int i : nums1) s1.insert(i);
        for (int i : nums2) s2.insert(i);
        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(ans, ans.begin()));
        for (auto it = ans.begin(); it != ans.end(); it++) res.push_back(*it);
        return res;
    }
};
// @lc code=end

