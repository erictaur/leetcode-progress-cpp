class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> cur;
        
        dfs(ans, cur, nums, 0);
        
        return ans;
    }
    
    void dfs(vector<vector<int>>& ans, vector<int>& cur, vector<int>& nums, int idx){
        ans.push_back(cur);
        
        for(int i=idx; i<nums.size(); i++){
            cur.push_back(nums[i]);
            dfs(ans, cur, nums, i+1);
            cur.pop_back();
        }
    }
};

/* 78. Subsets.cpp
//////////////////////////////////////////////////
Given an integer array nums of unique elements, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

https://leetcode.com/problems/subsets/
//////////////////////////////////////////////////
*/
