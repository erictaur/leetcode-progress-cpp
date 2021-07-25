class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reachable = 0;
        
        for(int i=nums.size()-2; i>=0; i--){
            reachable++;
            
            if(reachable <= nums[i]) reachable = 0;
        }
        
        return reachable == 0 ? true : false;
    }
};

/* 55. Jump-Game.cpp
//////////////////////////////////////////////////
Given an array of non-negative integers nums, you are initially positioned at the first index of the array.
Each element in the array represents your maximum jump length at that position.
Determine if you are able to reach the last index.

Input: nums = [2,3,1,1,4]
Output: true
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.

https://leetcode.com/problems/jump-game/
//////////////////////////////////////////////////
*/
