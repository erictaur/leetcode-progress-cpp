class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* ans  = new ListNode(0, head);
        // Previous head location
        ListNode* prev = ans;
        
        while(head){
            if(head->next && head->val == head->next->val){
                while(head->next && head->val == head->next->val){
                    head = head->next;
                }
                prev->next = head->next;
            }
            else{
                prev = prev->next;
            }
            head = head->next;
        }
        
        return ans->next;
    }
};

/* 82. Remove-Duplicates-from-Sorted-List-II.cpp
//////////////////////////////////////////////////
Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list. 
Return the linked list sorted as well.

Example 1:
Input: head = [1,2,3,3,4,4,5]
Output: [1,2,5]

https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/
//////////////////////////////////////////////////
*/
