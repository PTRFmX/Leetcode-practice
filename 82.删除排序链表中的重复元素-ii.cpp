/*
 * @lc app=leetcode.cn id=82 lang=cpp
 *
 * [82] 删除排序链表中的重复元素 II
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
        ListNode* ans = head;
        set<int> dpc;
        while (head != nullptr && head->next != nullptr) {
            ListNode* nt = head->next;
            if (head->val == nt->val) {
                dpc.insert(nt->val);
                head->next = nt->next;
            }
            head = head->next;
        }
        head = ans;
        while (head->next != nullptr) {
            head->next = removeNode(head->next, dpc);
            head = head->next;
            if (head == nullptr) break;
        }
        ans = removeNode(ans, dpc);
        return ans;
    }

    ListNode* removeNode(ListNode* n, set<int> dpc) {
        if (n == nullptr) return n;
        if (dpc.find(n->val) != dpc.end()) {
            return removeNode(n->next, dpc);
        }
        return n;
    }
};
// @lc 

