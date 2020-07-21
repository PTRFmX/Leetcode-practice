/*
 * @lc app=leetcode.cn id=113 lang=cpp
 *
 * [113] 路径总和 II
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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> ans;
        if (root == nullptr) return ans;
        pathSumRecursion(root, sum, 0, {}, &ans);
        return ans;
    }

    void pathSumRecursion(TreeNode* root, int sum, int curr_sum, vector<int> curr_path, vector<vector<int>>* ans) {
        curr_sum += root->val;
        curr_path.push_back(root->val);
        if (root->left == nullptr && root->right == nullptr) {
            if (curr_sum == sum) ans->push_back(curr_path);
            return;
        }
        if (root->left != nullptr) pathSumRecursion(root->left, sum, curr_sum, curr_path, ans);
        if (root->right != nullptr) pathSumRecursion(root->right, sum, curr_sum, curr_path, ans);
    }
};
// @lc code=end

