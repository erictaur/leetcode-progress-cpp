/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int getMinimumDifference(TreeNode* root) {
        
        int ans = INT_MAX;
        vector<int> vals;    
        traverse(root, vals);
        
        std::sort(vals.begin(), vals.end());
        
        for(int i = 0; i < vals.size()-1; i++){
            if(vals[i+1] - vals[i] < ans) ans = vals[i+1] - vals[i];
        }
        
        return ans;
    }
    
    void traverse(TreeNode* node, vector<int>& vals){
        if(node->left != nullptr) traverse(node->left, vals);
        if(node->right != nullptr) traverse(node->right, vals);
        vals.push_back(node->val);
    }
};

/* 530. Minimum-Absolute-Difference-in-BST.cpp
//////////////////////////////////////////////////
Given a binary search tree with non-negative values, find the minimum absolute difference between values of any two nodes.

Example:

Input:

   1
    \
     3
    /
   2

Output:
1

Explanation:
The minimum absolute difference is 1, which is the difference between 2 and 1 (or between 2 and 3).
 
Note:
There are at least two nodes in this BST.

https://leetcode.com/problems/minimum-absolute-difference-in-bst/
//////////////////////////////////////////////////
*/
