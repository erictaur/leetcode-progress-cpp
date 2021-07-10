class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        
        for(int LL=0; LL<nums.size(); LL++){
            
            int tar3 = target - nums[LL];
            
            for(int LR=LL+1; LR<nums.size(); LR++){
                int RL = LR+1;
                int RR = nums.size()-1;
                
                int tar2 = tar3 - nums[LR];
                
                while(RL < RR){
                    int cur = nums[RL] + nums[RR];
                    if(cur < tar2){
                        RL++;
                    }
                    else if(cur > tar2){
                        RR--;
                    }
                    else{
                        ans.push_back({nums[LL], nums[LR], nums[RL], nums[RR]});

                        while(RL < RR && ans.back()[2] == nums[RL]) RL++;
                        while(RL < RR && ans.back()[3] == nums[RR]) RR--;
                    }                    
                }

                while(LR+1 < nums.size() && nums[LR] == nums[LR+1]) LR++;
            }
            while(LL+1 < nums.size() && nums[LL] == nums[LL+1]) LL++;
        }
        
        return ans;
    }
};

/* 18. 4Sum.cpp
//////////////////////////////////////////////////
Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

0 <= a, b, c, d < n
a, b, c, and d are distinct.
nums[a] + nums[b] + nums[c] + nums[d] == target
You may return the answer in any order.

Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

https://leetcode.com/problems/4sum/
//////////////////////////////////////////////////
*/
