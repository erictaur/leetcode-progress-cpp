class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int local_ans = nums[0], global_ans = nums[0];
        
        if(nums.size() == 1) return nums[0];
        
        for(int i = 1; i < nums.size(); i++){
            local_ans = max(nums[i], nums[i]+local_ans);
            global_ans = max(local_ans, global_ans);
        }
        return global_ans;
    }
};

/* 53. Maximum Subarray.cpp
//////////////////////////////////////////////////
Given an integer array nums, 
find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

https://leetcode.com/problems/maximum-subarray/
//////////////////////////////////////////////////
*/
