class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
                vector<vector<int>> traverse;
        queue<TreeNode*> q;
        
        if(root == nullptr) return traverse;
        
        q.push(root);
        while(!q.empty()){
            int numToVisit = q.size();
            vector<int> curLevel;
            
            for(int i = 0; i < numToVisit; i++){
                TreeNode* atNode = q.front();
                curLevel.push_back(atNode->val);
                q.pop();
                
                if(atNode->left != nullptr) q.push(atNode->left);
                if(atNode->right != nullptr) q.push(atNode->right);
            }
            traverse.push_back(curLevel);
        }
        //reverse(traverse.begin(), traverse.end());
        
        return traverse;
    }
};

/* 102. Binary-Tree-Level-Order-Traversal.cpp
//////////////////////////////////////////////////
Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).

For example:
Given binary tree [3,9,20,null,null,15,7],
    3
   / \
  9  20
    /  \
   15   7
return its level order traversal as:
[
  [3],
  [9,20],
  [15,7]
]

https://leetcode.com/problems/binary-tree-level-order-traversal/
//////////////////////////////////////////////////
*/
