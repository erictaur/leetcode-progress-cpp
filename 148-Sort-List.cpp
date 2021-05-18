class Solution {
public:
    ListNode* sortList(ListNode* head) {
        // Split list recursion
        
        // Base case
        if(!head || !head->next){
            return head;
        }
        
        ListNode* fast  = head;
        ListNode* slow  = head;
        ListNode* split = head;
        
        while(fast && fast->next){
            split = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        split->next = nullptr; // This splits the list
        
        ListNode* left  = sortList(head);
        ListNode* right = sortList(slow);
        
        return merge(left, right);
    }
    
    ListNode* merge(ListNode* left, ListNode* right){
        // Base case for both left and right
        if(!left) return right;
        if(!right) return left;
        
        if(left->val < right->val){
            left->next = merge(left->next, right);
            return left;
        }
        else{
            right->next = merge(left, right->next);
            return right;
        }
    }
};

/* 148. Sort-List.cpp
//////////////////////////////////////////////////
Given the head of a linked list, return the list after sorting it in ascending order.
Follow up: Can you sort the linked list in O(n logn) time and O(1) memory (i.e. constant space)?

Input: head = [4,2,1,3]
Output: [1,2,3,4]

https://leetcode.com/problems/sort-list/
//////////////////////////////////////////////////
*/
