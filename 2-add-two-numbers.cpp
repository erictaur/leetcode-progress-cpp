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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum = 0;
        ListNode newList(0);
        ListNode *t = &newList;
        
        while(l1 || l2 || sum){
            sum += (l1? l1->val : 0) + (l2? l2->val : 0);
            t->next = new ListNode(sum%10);
            t = t->next;
            sum /= 10;
            
            if(l1){
                l1 = l1 -> next;
            }
            if(l2){
                l2 = l2 -> next;
            }
        }
        return newList.next;
    }
};

/* 2. add-two-numbers.cpp
//////////////////////////////////////////////////
You are given two non-empty linked lists representing two non-negative integers. 
The digits are stored in reverse order, and each of their nodes contains a single digit. 
Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.

https://leetcode.com/problems/add-two-numbers/
//////////////////////////////////////////////////
*/
