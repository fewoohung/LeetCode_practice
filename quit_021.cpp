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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if (l1 == NULL) return l2;
        if (l2 == NULL) return l1;
        
        ListNode dummy(0), *temp = &dummy; // temp->val save dummy address. dummy(0): dummy->val = 0, dummy->next = NULL
        while (l1 && l2)
        {
            if (l1->val < l2->val)
            {
                temp->next = l1;
                l1 = l1->next;
            }
            else
            {
                temp->next = l2;
                l2 = l2->next;
            }
            temp = temp->next; // open a new node.
        }
        temp->next = l1 ? l1:l2; // save the last element to dummy.next
        return dummy.next;
        
    }
};