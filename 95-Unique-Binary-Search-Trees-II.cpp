class Solution {
public:
    vector<TreeNode*> generateTrees(int n) {
        return gentree(1, n);
    }
    
    vector<TreeNode*> gentree(int start, int finish){
        vector<TreeNode*> res;
        
        if(start > finish){
            res.push_back(nullptr);
            return res;
        }
        
        for(int i=start; i<=finish; i++){
            auto left = gentree(start, i-1);
            auto right = gentree(i+1, finish);
            
            for(auto l : left){
                for(auto r : right){
                    TreeNode* root = new TreeNode(i, l, r);
                    res.push_back(root);
                }
            }
        }
        
        return res;
    }
};

/* 95. Unique-Binary-Search-Trees-II.cpp
//////////////////////////////////////////////////
Given an integer n, return all the structurally unique BST's (binary search trees), which has exactly n nodes of unique values from 1 to n. 

Input: n = 3
Output: [[1,null,2,null,3],[1,null,3,2],[2,1,3],[3,1,null,null,2],[3,2,null,1]]

https://leetcode.com/problems/unique-binary-search-trees-ii/
//////////////////////////////////////////////////
*/
