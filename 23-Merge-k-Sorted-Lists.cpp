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
    
    struct cmp{
        bool operator()(ListNode* lhs, ListNode* rhs){
            return lhs->val > rhs->val;
        }
    };
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        priority_queue<ListNode*, vector<ListNode*>, cmp> pq;
        for(auto list : lists){
            if(list) pq.push(list);
        }
        if(pq.empty()) return nullptr;
        
        ListNode* head = pq.top();
        pq.pop();
        if(head->next) pq.push(head->next);
        
        ListNode* tail = head;
        while(!pq.empty()){  
            
            tail->next = pq.top();
            pq.pop();
            tail = tail->next;
            if(tail->next) pq.push(tail->next);
        }
        
        return head;
    }
};

/* 23. Merge-k-Sorted-Lists.cpp
//////////////////////////////////////////////////
You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.
Merge all the linked-lists into one sorted linked-list and return it.

Input: lists = [[1,4,5],[1,3,4],[2,6]]
Output: [1,1,2,3,4,4,5,6]
Explanation: The linked-lists are:
[
  1->4->5,
  1->3->4,
  2->6
]
merging them into one sorted list:
1->1->2->3->4->4->5->6

https://leetcode.com/problems/merge-k-sorted-lists/
//////////////////////////////////////////////////
*/
