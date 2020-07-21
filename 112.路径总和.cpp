/*
 * @lc app=leetcode.cn id=112 lang=cpp
 *
 * [112] 路径总和
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
    bool hasPathSum(TreeNode* root, int sum) {
        if (root == nullptr) return false;
        if (sum == root->val && root->left == nullptr && root->right == nullptr) {
            return true;
        }
        int nextSum = sum - root->val;
        return hasPathSum(root->left, nextSum) || hasPathSum(root->right, nextSum);
    }
};
// @lc code=end

