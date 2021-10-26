// link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/


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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL) return head->next;
        ListNode *fast = head, *temp = head;
        int i=0;
        while(temp != NULL) {
            i++;
            temp = temp -> next;
        }
        int j=0;
        if(i-n==0)
        {
            head=head->next;
            return head;
        }
        while(fast!=NULL) {
            j+=1;
            if(j==i-n) {
                fast->next = fast -> next -> next;
            }
            else 
                fast = fast -> next;
        }
        return head;
    }
};