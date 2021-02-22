class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        
        if(root == nullptr) return nullptr;     
        if(val == root->val) return root;
        
        if(val < root->val) return searchBST(root->left, val);
        return searchBST(root->right, val);
    }
};

/* 700. Search-in-a-Binary-Search-Tree.cpp
//////////////////////////////////////////////////
You are given the root of a binary search tree (BST) and an integer val.

Find the node in the BST that the node's value equals val and return the subtree rooted with that node. 
If such a node does not exist, return null.

Input: isConnected = [[1,1,0],[1,1,0],[0,0,1]]
Output: 2

https://leetcode.com/problems/search-in-a-binary-search-tree/
//////////////////////////////////////////////////
*/
