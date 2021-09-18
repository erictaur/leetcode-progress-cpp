class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        
        for(int d=0; d<32; d++){
            
            int sum = 0;
            
            for(int i=0; i<nums.size(); i++){
                if(nums[i] & 1 == 1){
                    sum++;
                }
                nums[i] = nums[i] >> 1;
            }
            
            if(sum%3 != 0){
                ans |= (sum%3) << d;
            }
        }
        
        return ans;
    }
};

/* 137. Single-Number-II.cpp
//////////////////////////////////////////////////
Given an integer array nums where every element appears three times except for one, which appears exactly once. 
Find the single element and return it.

You must implement a solution with a linear runtime complexity and use only constant extra space.

Input: nums = [2,2,3,2]
Output: 3

https://leetcode.com/problems/single-number-ii/
//////////////////////////////////////////////////
*/
