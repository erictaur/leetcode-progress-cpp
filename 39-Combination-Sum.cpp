class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> combs;
        vector<int> cur_comb;
        
        dfs(candidates, combs, cur_comb, 0, target);
        
        return combs;
    }
    void dfs(vector<int>& candidates, vector<vector<int>>& combs, vector<int>& cur_comb, int idx, int target){
        if(target == 0){
            combs.push_back(cur_comb);
            return;
        }
        
        for(int i = idx; i < candidates.size(); i++){
            if(target< 0){
                return;
            } 
            cur_comb.push_back(candidates[i]);
            dfs(candidates, combs, cur_comb, i, target - candidates[i]);
            cur_comb.pop_back();
        }
    }
};

/* 547. Number-of-Provinces.cpp
//////////////////////////////////////////////////
Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. 
You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times. 
Two combinations are unique if the frequency of at least one of the chosen numbers is different.

It is guaranteed that the number of unique combinations that sum up to target is less than 150 combinations for the given input.

Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]
Explanation:
2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
7 is a candidate, and 7 = 7.
These are the only two combinations.

https://leetcode.com/problems/combination-sum/
//////////////////////////////////////////////////
*/
