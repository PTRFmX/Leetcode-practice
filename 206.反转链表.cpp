/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) return head;
        ListNode* curr = head;
        while (curr->next != nullptr) {
            ListNode* fnt = curr->next->next;
            curr->next->next = head;
            head = curr->next;
            curr->next = fnt;
        }
        return head;
    }
};
// @lc code=end

