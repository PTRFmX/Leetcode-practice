/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) return head;
        ListNode* result = head;
        ListNode* tmp = head->next;
        while (tmp != nullptr) {
            int value = head->val;
            while (tmp != nullptr && tmp->val == value) {
                tmp = tmp->next;
            }
            head->next = tmp;
            head = head->next;
        }
        return result;
    }
};
// @lc code=end

