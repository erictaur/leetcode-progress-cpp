class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* ans  = new ListNode(0, head);
        ListNode* prev = ans;
        
        while(head && head->next){
            if(head->val == head->next->val){
                while(head->next && head->val == head->next->val){
                    head = head->next;
                }
                prev->next = head;
                prev = prev->next;
            }
            else{
                prev = prev->next;
            }
            head = head->next;
        }
        
        return ans->next;
    }
};

/* 83. Remove-Duplicates-from-Sorted-List.cpp
//////////////////////////////////////////////////
Given the head of a sorted linked list, delete all duplicates such that each element appears only once. 
Return the linked list sorted as well.

Input: head = [1,1,2]
Output: [1,2]

https://leetcode.com/problems/remove-duplicates-from-sorted-list/
//////////////////////////////////////////////////
*/
