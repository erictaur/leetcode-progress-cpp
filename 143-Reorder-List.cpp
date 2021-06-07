class Solution {
public:
    
    bool finish;
    
    void reorderList(ListNode* head) {
        ListNode* start = head;
        finish = false;
        helper(head, start);
    }
    
    void helper(ListNode* node, ListNode* &cur){
        if(!node) {
            return;
        }
        
        helper(node->next, cur);
        
        if(!finish){
            ListNode* next = cur->next;
            cur->next = node;
            node->next = next;
            cur = next;
        }
        
        if(cur && cur->next==node){
            finish = true;
            cur->next = nullptr;
        }
    }
};

/* 143. Reorder-List.cpp
//////////////////////////////////////////////////
You are given the head of a singly linked-list. The list can be represented as:

L0 → L1 → … → Ln - 1 → Ln
Reorder the list to be on the following form:

L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
You may not modify the values in the list's nodes. Only nodes themselves may be changed.

Input: head = [1,2,3,4]
Output: [1,4,2,3]

https://leetcode.com/problems/reorder-list/
//////////////////////////////////////////////////
*/
