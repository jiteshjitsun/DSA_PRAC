// https://leetcode.com/problems/remove-linked-list-elements/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0), *it = &dummy;
        
        while(head) {
            if (head->val == val) {
            ListNode* toDel = head;
            head = head->next;
            delete toDel;
            } else {
                it->next = head;
                head = head->next;
                it = it->next;
            }
        }
        it->next = NULL;
    
        return dummy.next;
    }
};