class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            if(i != 0){
                nums[i] += nums[i-1];
            }
        }
        
        return nums;
    }
};

/* 1480. Running-Sum-of-1d-Array.cpp
//////////////////////////////////////////////////
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
Return the running sum of nums.

Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].

https://leetcode.com/problems/running-sum-of-1d-array/
//////////////////////////////////////////////////
*/
