class Solution {
public:
    int majorityElement(vector<int>& nums) {
        pair<int, int> p;
        
        p.first = nums[0];
        p.second = 0;
        
        for(int i=1; i<nums.size(); i++){
            if(nums[i] == p.first){
                p.second++;
            }
            else if(p.second == 0){
                p.first = nums[i];
            }
            else{
                p.second--;
            }
        }
        
        return p.first;
    }
};

/* 169. Majority-Element.cpp
//////////////////////////////////////////////////
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. 
You may assume that the majority element always exists in the array.

Input: nums = [2,2,1,1,1,2,2]
Output: 2

https://leetcode.com/problems/majority-element/
//////////////////////////////////////////////////
*/
