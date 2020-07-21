/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode(0);
        ListNode* r = result;
        int carry = 0;
        while(l1 != nullptr || l2 != nullptr) {
            
            int l1_val = 0, l2_val = 0;
            if (l1 != nullptr) { l1_val = l1->val; }
            if (l2 != nullptr) { l2_val = l2->val; }

            ListNode* node = new ListNode(carry);

            node->val += l1_val + l2_val;
            if (node->val >= 10) {
                node->val -= 10;
                carry = 1;
            }
            else { carry = 0; }

            if (l1 != nullptr) {
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                l2 = l2->next;
            }

            result->next = node;
            result = result->next;
        }
        if (carry && l1 == nullptr && l2 == nullptr) {
            result->next = new ListNode(1);
        }
        
        return r->next;
    }
};
// @lc code=end

