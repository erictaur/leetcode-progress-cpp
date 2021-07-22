class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        
        dfs(ans, nums, 0, nums.size()-1);
        
        return ans;
    }
    
    void dfs(vector<vector<int>>& ans, vector<int>& nums, int lp, int rp){
        if(lp == rp){
            ans.push_back(nums);
            return;
        }
        
        for(int it=lp; it<=rp; it++){
            swap(nums[lp], nums[it]);
            dfs(ans, nums, lp+1, rp);
            swap(nums[lp], nums[it]);
        }
    }
};

/* 46. Permutations.cpp
//////////////////////////////////////////////////
Given an array nums of distinct integers, return all the possible permutations. 
You can return the answer in any order.

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

https://leetcode.com/problems/permutations/
//////////////////////////////////////////////////
*/
