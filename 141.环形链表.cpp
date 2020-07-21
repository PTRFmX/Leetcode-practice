/*
 * @lc app=leetcode.cn id=141 lang=cpp
 *
 * [141] 环形链表
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
    bool hasCycle(ListNode *head) {
        set<ListNode*> visited;
        while (head != nullptr && visited.find(head) == visited.end()) {
            visited.insert(head);
            head = head->next;
        }
        if (head == nullptr) return false;
        return true;

    }
};
// @lc code=end

