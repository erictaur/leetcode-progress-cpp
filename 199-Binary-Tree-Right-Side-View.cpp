class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(root) dfs(root, 0, ans);
        
        return ans;
    }
    void dfs(TreeNode* node, int lvl, vector<int>& ans){
        if(lvl >= ans.size()) ans.push_back(node->val);
        if(node->right) dfs(node->right, lvl+1, ans);
        if(node->left) dfs(node->left, lvl+1, ans);
        
        return;
    }
};

/* 199. Binary-Tree-Right-Side-View.cpp
//////////////////////////////////////////////////
Given the root of a binary tree, imagine yourself standing on the right side of it.
Return the values of the nodes you can see ordered from top to bottom.

Example 1:
Input: root = [1,2,3,null,5,null,4]
Output: [1,3,4]

https://leetcode.com/problems/binary-tree-right-side-view/
//////////////////////////////////////////////////
*/
