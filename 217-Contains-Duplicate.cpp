class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size() == 1 || nums.size() == 0) return false;
        std::sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
            else{
                continue;
            }
        }
        return false;
    }
};

/* 217. Contains-Duplicate.cpp
//////////////////////////////////////////////////
Given an array of integers, find if the array contains any duplicates.
Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.

Input: [1,2,3,1]
Output: true

STL methods: sort, erase, unique

https://leetcode.com/problems/contains-duplicate/
//////////////////////////////////////////////////
*/
