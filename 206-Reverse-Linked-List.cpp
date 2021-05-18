class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prevN = nullptr;
        ListNode* nextN = nullptr;
        
        while(head){
            nextN = head->next;
            head->next = prevN;
            prevN = head;
            head = nextN;
        }
        
        return prevN;
    }
};

/* 206. Reverse-Linked-List.cpp
//////////////////////////////////////////////////
Given the head of a singly linked list, reverse the list, and return the reversed list.

Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]

https://leetcode.com/problems/reverse-linked-list/
//////////////////////////////////////////////////
*/
