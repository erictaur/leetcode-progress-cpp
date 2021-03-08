/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {        
        vector<int> ans;
        
        if(!root) return ans;
        
        traverse(root, ans);
        return ans;
    }
    
    void traverse(Node* root, vector<int>& ans){
        if(!root) return;
        
        ans.push_back(root->val);
        for(auto child : root->children){
            traverse(child, ans);
        }
    }

};

/* 589. N-ary-Tree-Preorder-Traversal.cpp
//////////////////////////////////////////////////
Given an n-ary tree, return the preorder traversal of its nodes' values.
Nary-Tree input serialization is represented in their level order traversal, each group of children is separated by the null value (See examples).

Input: root = [1,null,3,2,4,null,5,6]
Output: [1,3,5,6,2,4]

https://leetcode.com/problems/n-ary-tree-preorder-traversal/
//////////////////////////////////////////////////
*/
