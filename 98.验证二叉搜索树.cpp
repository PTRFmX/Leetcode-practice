/*
 * @lc app=leetcode.cn id=98 lang=cpp
 *
 * [98] 验证二叉搜索树
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
    bool isValidBST(TreeNode* root) {
        if (root == nullptr) return true;
        return validBST(root, LONG_MIN, LONG_MAX);
    }

    /** 
     * min_v: make sure all right substree is greater than min_v
     * max_v: make sure all left substree is less than max_v
    */
    bool validBST(TreeNode* root, long min_v, long max_v) {
        if (root == nullptr) return true;
        if (root->left != nullptr && (root->left->val >= root->val || root->left->val <= min_v)) return false;
        if (root->right != nullptr && (root->right->val <= root->val || root->right->val >= max_v)) return false;
        return validBST(root->left, min_v, root->val > max_v ? max_v : root->val) && validBST(root->right, root->val > min_v ? root->val : min_v, max_v);
    }
};
// [-2147483648,null,2147483647,-2147483648]
// [-2147483648,null,2147483647]
// @lc code=end

