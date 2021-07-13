class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ph;
        
        sort(candidates.begin(), candidates.end());
        
        dfs(candidates, ans, ph, 0, target);
        
        return ans;
    }
    
    void dfs(vector<int>& candidate, vector<vector<int>>& ans, vector<int>& ph, int depth, int target){
        // push condition
        if(target == 0){
            ans.push_back(ph);
            return;
        }
        
        // iterative section
        for(int i=depth; i<candidate.size(); i++){
            // return condition
            if(candidate[i] > target) return;
            
            // iteration sanity check
            if(i>0 && candidate[i] == candidate[i-1] && i > depth) continue;
            
            // recursive section
            ph.push_back(candidate[i]);
            dfs(candidate, ans, ph, i+1, target-candidate[i]);
            
            ph.pop_back();
        }
    }
};

/* 40. Combination-Sum-II.cpp
//////////////////////////////////////////////////
Given a collection of candidate numbers (candidates) and a target number (target), 
find all unique combinations in candidates where the candidate numbers sum to target.

Each number in candidates may only be used once in the combination.

Note: The solution set must not contain duplicate combinations.

Input: candidates = [10,1,2,7,6,1,5], target = 8
Output: 
[
[1,1,6],
[1,2,5],
[1,7],
[2,6]
]

https://leetcode.com/problems/combination-sum-ii/
//////////////////////////////////////////////////
*/
