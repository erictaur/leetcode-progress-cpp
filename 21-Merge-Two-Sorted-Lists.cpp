class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode NewList(0);
        ListNode *current = &NewList;
    if(!l1 && !l2) return l1;
        
    while(l1 && l2){
        if (l1->val <= l2->val){
            current->next = new ListNode(l1->val);
            l1 = l1->next;
        }
        else{
            current->next = new ListNode(l2->val);
            l2 = l2->next;
        }
        current = current->next;
    }
    if(l1) current->next = l1;
    if(l2) current->next = l2;
        
    return NewList.next;
    }
};

/* 21. Merge-Two-Sorted-Lists.cpp
//////////////////////////////////////////////////
Merge two sorted linked lists and return it as a sorted list. 
The list should be made by splicing together the nodes of the first two lists.

Input: l1 = [1,2,4], l2 = [1,3,4]
Output: [1,1,2,3,4,4]

https://leetcode.com/problems/merge-two-sorted-lists/
//////////////////////////////////////////////////
*/
