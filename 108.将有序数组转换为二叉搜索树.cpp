/*
 * @lc app=leetcode.cn id=108 lang=cpp
 *
 * [108] 将有序数组转换为二叉搜索树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* arrayToBST(vector<int> nums, int begin, int end) {
        if (begin == end) return nullptr;
        int mid = (begin + end) / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = arrayToBST(nums, begin, mid);
        root->right = arrayToBST(nums, mid + 1, end);
        return root;
    }


    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int len = nums.size();
        if (!len) return nullptr;
        return arrayToBST(nums, 0, len); 
    }
};
// @lc code=end

