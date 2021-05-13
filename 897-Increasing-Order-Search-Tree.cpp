class Solution {
public:
    TreeNode* node = new TreeNode();
    TreeNode* ans = node;
    
    TreeNode* increasingBST(TreeNode* root) {
        if(root->left != nullptr){
            increasingBST(root->left);
        }
        
        if(root != nullptr){
            TreeNode* nxt = new TreeNode();
            node->right = nxt;
            node->right->val = root->val;
            node = nxt;            
        }

        if(root->right != nullptr){
            increasingBST(root->right);
        }        
        
        return ans->right;
    }
};

/* 897. Increasing-Order-Search-Tree.cpp
//////////////////////////////////////////////////
Given the root of a binary search tree, rearrange the tree in in-order so that the leftmost node in the tree is now the root of the tree, 
and every node has no left child and only one right child.

Input: root = [5,3,6,2,4,null,8,1,null,null,null,7,9]
Output: [1,null,2,null,3,null,4,null,5,null,6,null,7,null,8,null,9]

https://leetcode.com/problems/increasing-order-search-tree/
//////////////////////////////////////////////////
*/