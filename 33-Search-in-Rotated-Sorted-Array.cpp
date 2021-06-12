class Solution {
public:
    int search(vector<int>& nums, int target) {
        int L = 0;
        int R = nums.size()-1;
        
        while(L <= R){
            int M = floor((L+R)/2);
            
            if(nums[M] == target){
                return M;
            }
            else if(((nums[M]>target)  && (target>=nums[0])) ||
                    ((nums[0]>nums[M]) && (nums[M]>target))  ||
                    ((target>=nums[0]) && (nums[0]>nums[M]))){
                R = M-1;
            }
            else{
                L = M+1;
            }
        }
        
        return -1;
    }
};

/* 33. Search-in-Rotated-Sorted-Array.cpp
//////////////////////////////////////////////////
There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is rotated at an unknown pivot index k (0 <= k < nums.length) 
such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). 

For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4

https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/
//////////////////////////////////////////////////
*/
