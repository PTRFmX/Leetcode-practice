/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set<ListNode*> ptrs;
        while (headA != nullptr) {
            ptrs.insert(headA);
            headA = headA->next;
        }
        while (headB != nullptr) {
            if (ptrs.find(headB) != ptrs.end()) return headB;
            headB = headB->next;
        }
        return nullptr;
    }
};
// @lc code=end

