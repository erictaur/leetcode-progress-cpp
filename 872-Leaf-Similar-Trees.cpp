class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1, v2;
        checkLeaf(root1, v1);
        checkLeaf(root2, v2);
        
        if(v1.size()!=v2.size()) return false;
        else{
            for(int i = 0; i < v1.size(); i++){
                if(v1[i] != v2[i]) return false;
            }
        }      
        return true;
    }
    
    void checkLeaf(TreeNode* root, vector<int> &v){
        if(root->left!=nullptr) checkLeaf(root->left, v);
        if(root->left==nullptr && root->right==nullptr) v.push_back(root->val);
        if(root->right!=nullptr) checkLeaf(root->right, v);
    }  
};

/* 872. Leaf-Similar-Trees.cpp
//////////////////////////////////////////////////
Consider all the leaves of a binary tree, from left to right order, the values of those leaves form a leaf value sequence.

Input: root1 = [3,5,1,6,2,9,8,null,null,7,4], root2 = [3,5,1,6,7,4,2,null,null,null,null,null,null,9,8]
Output: true

https://leetcode.com/problems/leaf-similar-trees/
//////////////////////////////////////////////////
*/
