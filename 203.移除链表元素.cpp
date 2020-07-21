/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
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
    ListNode* removeElements(ListNode* head, int val) {
        if (head == nullptr) return head;
        ListNode* ans = head;
        while (head->next != nullptr) {
            head->next = removeNode(head->next, val);
            head = head->next;
            if (head == nullptr) break;
        }
        ans = removeNode(ans, val);
        return ans;
    }

    ListNode* removeNode(ListNode* n, int v) {
        if (n == nullptr) return n;
        if (n->val == v) return removeNode(n->next, v);
        return n;
    }
};
// @lc code=end

