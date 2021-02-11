class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return checkSubtree(root->left, root->right);
    }
    
    bool checkSubtree(TreeNode* left, TreeNode* right){
        if(!left && !right){
            return true;
        }
        else if(!left || !right){
            return false;    
        }
        
        if(left->val != right->val){
            return false;
        }
        
        return checkSubtree(left->left, right->right) && checkSubtree(left->right, right->left);
    }
};

/* 101. Symmetric-Tree.cpp
//////////////////////////////////////////////////
Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).

For example, this binary tree [1,2,2,3,4,4,3] is symmetric:
    1
   / \
  2   2
 / \ / \
3  4 4  3
But the following [1,2,2,null,3,null,3] is not:
    1
   / \
  2   2
   \   \
   3    3
Follow up: Solve it both recursively and iteratively.

https://leetcode.com/problems/symmetric-tree/
//////////////////////////////////////////////////
*/
