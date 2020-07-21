/*
 * @lc app=leetcode.cn id=437 lang=cpp
 *
 * [437] 路径总和 III
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
    int pathSum(TreeNode* root, int sum) {
        if (root == nullptr) return 0;
        return pathSumRecursion(root, 0, sum) + pathSum(root->left, sum) + pathSum(root->right, sum);
    }

    int pathSumRecursion(TreeNode* root, int carry, int sum) {
        if (root == nullptr) return 0;
        carry += root->val;
        return (carry == sum) + pathSumRecursion(root->left, carry, sum) +  pathSumRecursion(root->right, carry, sum);
    }
};
// @lc code=end

