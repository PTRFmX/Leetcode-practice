/*
 * @lc app=leetcode.cn id=144 lang=cpp
 *
 * [144] 二叉树的前序遍历
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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        traversal(root, &ans);
        return ans;
    }

    void traversal(TreeNode* root, vector<int>* v) {
        if (root == nullptr) return;
        v->push_back(root->val);
        traversal(root->left, v);
        traversal(root->right, v);
    }
};
// @lc code=end

