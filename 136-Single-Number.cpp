class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size() > 1){
            sort(nums.begin(), nums.end());

            for(int i=0; i<nums.size(); i++){
                // Check if it is not a pair
                if(nums[i] != nums[i+1]){
                    return nums[i];
                }
                
                // Jump to next pair
                i++;
            }               
        }
        
        return nums[0];

    }
};

/* 136. Single-Number.cpp
//////////////////////////////////////////////////
Given a non-empty array of integers nums, every element appears twice except for one. 
Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

Input: nums = [4,1,2,1,2]
Output: 4

https://leetcode.com/problems/single-number/
//////////////////////////////////////////////////
*/
