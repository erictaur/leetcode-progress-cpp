class Solution {
public:
    
    int answer = 0;
    
    int longestUnivaluePath(TreeNode* root) {
        if(root) dfs(root);
        
        return answer;
    }

    int dfs(TreeNode* node){
        int left = node->left ? dfs(node->left) : 0;
        int right = node->right ? dfs(node->right) : 0;
        
        if(node->left == nullptr || node->left->val != node->val) left = 0;
        if(node->right == nullptr || node->right->val != node->val) right = 0;
        
        answer = max(answer, left+right);
        
        return max(left, right) + 1;
    }
    
};

/* 687. Longest-Univalue-Path.cpp
//////////////////////////////////////////////////
Given the root of a binary tree, return the length of the longest path, where each node in the path has the same value. 
This path may or may not pass through the root.
The length of the path between two nodes is represented by the number of edges between them.

Input: root = [5,4,5,1,1,5]
Output: 2

https://leetcode.com/problems/longest-univalue-path/
//////////////////////////////////////////////////
*/
