class Solution {
public:
    
    int ans = 0;
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        
        if(root->left != nullptr){
            rangeSumBST(root->left, low, high);
        }
        if(root->val>=low && root->val<=high){
            ans+=root->val;
        }
        if(root->right != nullptr){
            rangeSumBST(root->right, low, high);
        }
        
        return ans;
    }
};

/* 938. Range-Sum-of-BST.cpp
//////////////////////////////////////////////////
Given the root node of a binary search tree, return the sum of values of all nodes with a value in the range [low, high].

Input: root = [10,5,15,3,7,null,18], low = 7, high = 15
Output: 32

https://leetcode.com/problems/range-sum-of-bst/
//////////////////////////////////////////////////
*/
