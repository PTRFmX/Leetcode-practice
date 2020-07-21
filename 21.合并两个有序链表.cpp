/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == nullptr) { return l2; }
        if (l2 == nullptr) { return l1; }
        vector<int> digits;
        while(l1 != nullptr || l2 != nullptr) {
            if (l1 != nullptr) {
                digits.push_back(l1->val);
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                digits.push_back(l2->val);
                l2 = l2->next;
            }
        }
        sort(digits.begin(), digits.end());
        ListNode* result = new ListNode(digits[0]);
        ListNode* r = result;
        for (int i = 1; i < digits.size(); i++) {
            ListNode* node = new ListNode(digits[i]);
            result->next = node;
            result = result->next;
        }
        return r;
    }
};
// @lc code=end

