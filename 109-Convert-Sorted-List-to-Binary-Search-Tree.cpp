class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if(head) return dfs(head, nullptr);
        
        return nullptr;
    }
    TreeNode* dfs(ListNode* head, ListNode* tail){
        if(head == tail) return nullptr;
        if(head->next == tail){
            TreeNode* node = new TreeNode(head->val);
            return node;
        }
        
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(fast != tail && fast->next != tail){
            slow = slow->next;
            fast = fast->next->next;
        }
        TreeNode* node = new TreeNode(slow->val);
        node->left = dfs(head, slow);
        node->right = dfs(slow->next, tail);
        
        return node;
    }
};

/* 109. Convert-Sorted-List-to-Binary-Search-Tree.cpp
//////////////////////////////////////////////////
Given the head of a singly linked list where elements are sorted in ascending order, convert it to a height balanced BST.
Aa height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.

Input: head = [-10,-3,0,5,9]
Output: [0,-3,9,-10,null,5]
Explanation: One possible answer is [0,-3,9,-10,null,5], which represents the shown height balanced BST.

https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/
//////////////////////////////////////////////////
*/
