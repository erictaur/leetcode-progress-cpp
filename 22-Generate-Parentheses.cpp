class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        helper(ans, "", n, 0);
        
        return ans;
    }
    void helper(vector<string>& ans, string par, int left, int right){
        if(left==0 && right==0){
            ans.push_back(par);
            return;
        }
        if(right>0) helper(ans, par+")", left, right-1);
        if(left>0) helper(ans, par+"(", left-1, right+1);
    }
};

/* 101. Symmetric-Tree.cpp
//////////////////////////////////////////////////
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

Example 1:

Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]

https://leetcode.com/problems/generate-parentheses/
//////////////////////////////////////////////////
*/
