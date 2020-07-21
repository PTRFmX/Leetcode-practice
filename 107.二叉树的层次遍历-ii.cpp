/*
 * @lc app=leetcode.cn id=107 lang=cpp
 *
 * [107] 二叉树的层次遍历 II
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
    vector<vector<int>> levelOrderBottomWithDepth(TreeNode* root, vector<vector<int>>* v = new vector<vector<int>>, int depth = 0) {
        if (root == nullptr) return *v;
        if (v->size() <= depth) {
            v->push_back({root->val});
        }
        else {
            v->at(depth).push_back(root->val);
        }
        levelOrderBottomWithDepth(root->left, v, ++depth);
        levelOrderBottomWithDepth(root->right, v, depth);
        return *v; 
    }

    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result = levelOrderBottomWithDepth(root);
        reverse(result.begin(), result.end());
        return result;
    }
};
// @lc code=end

