class Solution {
public:
    
    vector<int> buffer;
    int ans = 0;
    
    int sumRootToLeaf(TreeNode* root) {
        if(root) buffer.push_back(root->val);
        
        if(root->left != nullptr){
            sumRootToLeaf(root->left);
        }
        
        if(root->left == nullptr && root->right == nullptr){
            for(int i=0; i<buffer.size(); i++){
                ans += buffer[i] * pow(2, buffer.size()-1-i);
            }
        }
        
        if(root->right != nullptr){
            sumRootToLeaf(root->right);
        }
        
        buffer.pop_back();
        return ans;
    }
};

/* 1022. Sum-of-Root-To-Leaf-Binary-Numbers.cpp
//////////////////////////////////////////////////
You are given the root of a binary tree where each node has a value 0 or 1.  
Each root-to-leaf path represents a binary number starting with the most significant bit.  
For example, if the path is 0 -> 1 -> 1 -> 0 -> 1, then this could represent 01101 in binary, which is 13.

For all leaves in the tree, consider the numbers represented by the path from the root to that leaf.

Return the sum of these numbers. The answer is guaranteed to fit in a 32-bits integer.

Input: root = [1,0,1,0,1,0,1]
Output: 22
Explanation: (100) + (101) + (110) + (111) = 4 + 5 + 6 + 7 = 22

https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/
//////////////////////////////////////////////////
*/
