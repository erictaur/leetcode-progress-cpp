class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < target){
                if(i == nums.size()-1){
                    ans = nums.size();
                } 
                else if(target <= nums[i+1]){
                    ans = i+1;
                }
                else{
                    continue;
                }
            }
        }
        return ans;
    }
};

/* 35. Search-Insert-Position.cpp
//////////////////////////////////////////////////
Given a sorted array of distinct integers and a target value, return the index if the target is found. 
If not, return the index where it would be if it were inserted in order.

Input: nums = [1,3,5,6], target = 5
Output: 2

https://leetcode.com/problems/search-insert-position/
//////////////////////////////////////////////////
*/
