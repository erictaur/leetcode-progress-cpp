class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>> ans;
        vector<int> reg;
        
        dfs(nums, reg, ans, 0);
        
        return vector<vector<int>>(ans.begin(), ans.end());
    }
    
    void dfs(vector<int> &nums, vector<int>& arr, set<vector<int>>& answer, int idx){
        if(arr.size() >= 2){
            answer.insert(arr);
        }
        
        for(int i=idx; i<nums.size(); ++i){
            if(arr.size() == 0 || nums[i] >= arr.back()){
                arr.push_back(nums[i]);
                dfs(nums, arr, answer, i+1);
                arr.pop_back();
            }
        }
    }
    
};

/* 491. Increasing-Subsequences.cpp
//////////////////////////////////////////////////
Given an integer array nums, return all the different possible increasing subsequences of the given array with at least two elements. 
You may return the answer in any order.

The given array may contain duplicates, and two equal integers should also be considered a special case of increasing sequence.

Example 1:

Input: nums = [4,6,7,7]
Output: [[4,6],[4,6,7],[4,6,7,7],[4,7],[4,7,7],[6,7],[6,7,7],[7,7]]

https://leetcode.com/problems/increasing-subsequences/
//////////////////////////////////////////////////
*/
