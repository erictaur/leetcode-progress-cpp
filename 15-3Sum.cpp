class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size(); i++){
            int start = i+1;
            int end = nums.size()-1;
            int target = -nums[i];
            
            while(start < end){
                int result = nums[start] + nums[end];
                
                if(target > result){
                    start ++;
                }
                else if(target < result){
                    end --;
                }
                else{
                    ans.push_back({nums[i], nums[start], nums[end]});
                    int left = nums[start];
                    int right = nums[end];
                    
                    while(start < end && nums[start] == left){
                        start ++;
                    }
                    while(start < end && nums[end] == right){
                        end --;
                    }
                }
            }
            
            while(i+1 < nums.size() && nums[i+1] == nums[i]){
                i++;
            }
        }
        
        return ans;
    }
};

/* 15. 3Sum.cpp
//////////////////////////////////////////////////
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
Notice that the solution set must not contain duplicate triplets.

Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).

https://leetcode.com/problems/3sum/
//////////////////////////////////////////////////
*/
