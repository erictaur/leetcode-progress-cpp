class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());
        int ans = nums[0] + nums[1] + nums[2];
        
        for(int left=0; left<nums.size()-2; left++){
            if(left>0 && nums[left] == nums[left-1]) continue;
            
            int mid = left+1;
            int right = nums.size()-1;
            
            while(mid < right){
                int current = nums[left] + nums[mid] + nums[right];
                if(current == target) return target;
                
                if(abs(ans-target) > abs(current-target)){
                    ans = current;
                }
                
                if(current < target){
                    mid++;
                }
                else{
                    right--;
                }
                
            }
        }
        
        return ans;
    }
};

/* 16. 3Sum-Closest.cpp
//////////////////////////////////////////////////
Given an array nums of n integers and an integer target, find three integers in nums such that the sum is closest to target. 
Return the sum of the three integers. You may assume that each input would have exactly one solution.

Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).

https://leetcode.com/problems/3sum-closest/
//////////////////////////////////////////////////
*/
