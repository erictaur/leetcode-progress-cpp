class Solution {

vector<int> traverse;
public:
    vector<int> inorderTraversal(TreeNode* root) {
        
        if(root == nullptr) return traverse;
        
        inorderTraversal(root->left);
        traverse.push_back(root->val);
        inorderTraversal(root->right);
        return traverse;
    }
};

/* 94. Binary-Tree-Inorder-Traversal.cpp
//////////////////////////////////////////////////
Given the root of a binary tree, return the inorder traversal of its nodes' values.

Input: l1 = [1,2,4], l2 = [1,3,4]
Output: [1,1,2,3,4,4]

https://leetcode.com/problems/binary-tree-inorder-traversal/
//////////////////////////////////////////////////
*/
