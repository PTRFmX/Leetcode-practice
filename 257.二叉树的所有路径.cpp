/*
 * @lc app=leetcode.cn id=257 lang=cpp
 *
 * [257] 二叉树的所有路径
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
    vector<string> binaryTreePaths(TreeNode* root) {
        if (root == nullptr) return {};
        vector<string>* ans = new vector<string>;
        addPath(root, "", ans);
        return *ans;
    }

    void addPath(TreeNode* root, string path, vector<string>* v) {
        if (root->left == nullptr && root->right == nullptr) {
            v->push_back(path + to_string(root->val));
            return;
        }
        if (root->left != nullptr) addPath(root->left, path + to_string(root->val) + "->", v);
        if (root->right != nullptr) addPath(root->right, path + to_string(root->val) + "->", v);
    }
};
// @lc code=end

