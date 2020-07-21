/*
 * @lc app=leetcode.cn id=129 lang=cpp
 *
 * [129] 求根到叶子节点数字之和
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
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        if (!root) return sum;
        calculateSum(root, &sum, 0);
        return sum;
    }

    void calculateSum(TreeNode* root, int* sum, int curr) {
        curr *= 10;
        curr += root->val;
        if (!root->left && !root->right) {
            *sum += curr;
            return;
        }
        if (root->left) calculateSum(root->left, sum, curr);
        if (root->right) calculateSum(root->right, sum, curr);
    }
};
// @lc code=end

