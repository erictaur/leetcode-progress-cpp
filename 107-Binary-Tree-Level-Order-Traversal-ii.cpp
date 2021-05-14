class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
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
        reverse(traverse.begin(), traverse.end());
        
        return traverse;
    }
};

/* DFS Solution

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        if(root) {
            dfs(ans, root, 0);
        }
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
    void dfs(vector<vector<int>>& ans, TreeNode* node, int level){
        if(level >= ans.size()){
            ans.push_back({});
        }
        ans[level].push_back(node->val);
        if(node->left) dfs(ans, node->left, level+1);
        if(node->right) dfs(ans, node->right, level+1);
        
        return;
    }
};

*/

/* 107. Binary-Tree-Level-Order-Traversal.cpp
//////////////////////////////////////////////////
Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).
For example:
Given binary tree [3,9,20,null,null,15,7],
    3
   / \
  9  20
    /  \
   15   7
return its bottom-up level order traversal as:
[
  [15,7],
  [9,20],
  [3]
]

https://leetcode.com/problems/binary-tree-level-order-traversal-ii/
//////////////////////////////////////////////////
*/
