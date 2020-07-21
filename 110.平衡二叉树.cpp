/*
 * @lc app=leetcode.cn id=110 lang=cpp
 *
 * [110] 平衡二叉树
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
    int getTreeDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        return max(getTreeDepth(root->left), getTreeDepth(root->right)) + 1;
    }

    bool isBalanced(TreeNode* root) {
        if (root == nullptr) return true;
        int left = getTreeDepth(root->left);
        int right = getTreeDepth(root->right);
        return abs(left - right) <= 1 && isBalanced(root->left) && isBalanced(root->right); 
    }
};
// @lc code=end

