/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] 二叉树的中序遍历
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>* ans = new vector<int>;
        traversal(root, ans);
        return *ans;
    }

    void traversal(TreeNode* root, vector<int>* v) {
        if (root == nullptr) return;
        traversal(root->left, v);
        v->push_back(root->val);
        traversal(root->right, v);
    }
};
// @lc code=end

