/*
 * @lc app=leetcode.cn id=501 lang=cpp
 *
 * [501] 二叉搜索树中的众数
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
    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int> m;
        int max_count = 1;
        vector<int> ans;
        traversal(root, &m, &max_count);
        for (auto it = m.begin(); it != m.end(); it++) {
            if (it->second == max_count) ans.push_back(it->first);
        }
        return ans;
    }

    void traversal(TreeNode* root, unordered_map<int, int>* m, int* max_count) {
        if (!root) return;
        if (m->find(root->val) == m->end()) m->insert({root->val, 1});
        else {
            *max_count = max(*max_count, ++m->at(root->val));
        }
        traversal(root->left, m, max_count);
        traversal(root->right, m ,max_count);
    }
};
// @lc code=end

