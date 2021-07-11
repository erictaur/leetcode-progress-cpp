class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* ph = new ListNode();
        ph->next = head;
        
        ListNode* slow = ph;
        ListNode* fast = ph;
        
        for(int i=0; i<n; i++) fast = fast->next;
        
        while(fast->next){
            slow = slow->next;
            fast = fast->next;
        }
        
        ListNode* deleteNode = slow->next;
        slow->next = slow->next->next;
        
        delete deleteNode;
        
        return ph->next;
    }
};

/* 19. Remove-Nth-Node-From-End-of-List.cpp
//////////////////////////////////////////////////
Given the head of a linked list, remove the nth node from the end of the list and return its head.

Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]

https://leetcode.com/problems/remove-nth-node-from-end-of-list/
//////////////////////////////////////////////////
*/
