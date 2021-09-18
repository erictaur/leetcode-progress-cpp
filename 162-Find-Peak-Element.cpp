class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size() == 1){
            return 0;
        }
        
        int l = 1;
        int r = nums.size()-2;
        
        int m;

        while(l <= r){
            m = l + (r-l)/2;

            if(nums[m] > nums[m-1] && nums[m] > nums[m+1]){
                return m;
            }
            else if(nums[m] < nums[m-1]){
                r = m-1;
            }
            else if(nums[m] < nums[m+1]){
                l = m+1;
            }

        }            

        
        if(nums[0] > nums[1]) return 0;
        if(nums[nums.size()-1] > nums[nums.size()-2]) return nums.size()-1;
        
        return -1;
    }
};

/* 162. Find-Peak-Element.cpp
//////////////////////////////////////////////////
A peak element is an element that is strictly greater than its neighbors.
Given an integer array nums, find a peak element, and return its index. 
If the array contains multiple peaks, return the index to any of the peaks.
You may imagine that nums[-1] = nums[n] = -∞.
You must write an algorithm that runs in O(log n) time.

Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.

https://leetcode.com/problems/find-peak-element/
//////////////////////////////////////////////////
*/
