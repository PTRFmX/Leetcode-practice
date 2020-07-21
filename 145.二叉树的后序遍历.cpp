/*
 * @lc app=leetcode.cn id=145 lang=cpp
 *
 * [145] 二叉树的后序遍历
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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        traversal(root, &ans);
        return ans;
    }

    void traversal(TreeNode* root, vector<int>* v) {
        if (root == nullptr) return;
        traversal(root->left, v);
        traversal(root->right, v);
        v->push_back(root->val);
    }
};
// @lc code=end

