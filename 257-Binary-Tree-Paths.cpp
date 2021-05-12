class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;
    vector<string> convert;
    
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root) dfs(root);
        
        for(int i=0; i<ans.size(); i++){
            string s;
            for(int j=0; j<ans[i].size(); j++){
                s.append(to_string(ans[i][j]));
                if(j < ans[i].size()-1){
                    s.append("->");
                }
            }
            convert.push_back(s);
        }
        return convert;    
    }
    void dfs(TreeNode* node){
        path.push_back(node->val);
        if(!node->left && !node->right){
            ans.push_back(path);
            path.pop_back();
            return;
        }
        if(node->left) dfs(node->left);
        if(node->right) dfs(node->right);
        
        path.pop_back();
        return;
    }
};

/* 257. Binary-Tree-Paths.cpp
//////////////////////////////////////////////////
Given the root of a binary tree, return all root-to-leaf paths in any order.

Input: root = [1,2,3,null,5]
Output: ["1->2->5","1->3"]

https://leetcode.com/problems/binary-tree-paths/
//////////////////////////////////////////////////
*/
