class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> cur;
        
        sort(nums.begin(), nums.end());
        helper(ans, 0, cur, nums);
        
        return ans;
    }
    
    void helper(vector<vector<int>>& ans, int depth, vector<int>& cur, vector<int>& nums){
        ans.push_back(cur);
        
        for(int i = depth; i<nums.size(); i++){
            if(i == depth || nums[i] != nums[i-1]){
                cur.push_back(nums[i]);
                helper(ans, i+1, cur, nums);
                cur.pop_back();                
            }
        }
        
    }
};

/* 90. Subsets-II.cpp
//////////////////////////////////////////////////
Given an integer array nums that may contain duplicates, return all possible subsets (the power set).
The solution set must not contain duplicate subsets. Return the solution in any order.

Input: nums = [1,2,2]
Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]

https://leetcode.com/problems/subsets-ii/
//////////////////////////////////////////////////
*/
