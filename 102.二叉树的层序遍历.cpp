/*
 * @lc app=leetcode.cn id=102 lang=cpp
 *
 * [102] 二叉树的层序遍历
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>* ans = new vector<vector<int>>;
        traversal(root, 0, ans);
        return *ans;
    }

    void traversal(TreeNode* root, int depth, vector<vector<int>>* v) {
        if (root == nullptr) return;
        if (v->size() <= depth) v->push_back({});
        v->at(depth).push_back(root->val);
        traversal(root->left, depth + 1, v);
        traversal(root->right, depth + 1, v);
    }
};
// @lc code=end

