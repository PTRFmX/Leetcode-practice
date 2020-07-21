/*
 * @lc app=leetcode.cn id=234 lang=cpp
 *
 * [234] 回文链表
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
    bool isPalindrome(ListNode* head) {
        if (head == nullptr) return true;
        ListNode* fast = head, *slow = head;
        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
        }
        if (fast == head) return true;
        slow = reverseLinkedList(slow);
        while (slow != nullptr && head != nullptr) {
            if (slow->val != head->val) return false;
            slow = slow->next;
            head = head->next;
        }
        return true;
    }

    ListNode* reverseLinkedList(ListNode* head) {
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

