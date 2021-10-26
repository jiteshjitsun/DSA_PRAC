// link: https://leetcode.com/problems/middle-of-the-linked-list/

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
    ListNode* middleNode(ListNode* head) {
        int i=0;
        ListNode * temp=head;
        while(temp!=NULL) {
            i++;
            temp = temp -> next;
        }
        temp = head;
        int n=i/2;
        for(int j=0; j<n; j++) {
            temp = temp->next;
        }
        return temp;
    }
};








