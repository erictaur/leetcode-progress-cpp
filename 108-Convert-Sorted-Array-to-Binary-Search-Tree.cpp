class Solution {
public:
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.empty()) return nullptr;
        
        return buildBST(nums.begin(), nums.end());
    }
    
    TreeNode* buildBST(vector<int>::iterator begin, vector<int>::iterator end){
        if(begin >= end) return nullptr;
        
        vector<int>::iterator med = begin + (end-begin)/2;
        
        TreeNode* newNode = new TreeNode(*med);
        newNode->left = buildBST(begin, med);
        newNode->right = buildBST(med+1, end);
        
        return newNode;
    }
};

/* 108. Convert-Sorted-Array-to-Binary-Search-Tree.cpp
//////////////////////////////////////////////////
Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.
A height-balanced binary tree is a binary tree in which the depth of the two subtrees of every node never differs by more than one.

Input: nums = [-10,-3,0,5,9]
Output: [0,-3,9,-10,null,5]
Explanation: [0,-10,5,null,-3,null,9] is also accepted:

https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
//////////////////////////////////////////////////
*/
