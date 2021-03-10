class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s (nums.begin(), nums.end());
        
        auto it = s.end();
        
        if(s.size()<3){
            advance(it, -1);
            return *it;
        }
        
        advance(it, -3);
        return *it;
    }

};

/* 414. Third-Maximum-Number.cpp
//////////////////////////////////////////////////
Given integer array nums, return the third maximum number in this array. 
If the third maximum does not exist, return the maximum number.

Example 1:

Input: nums = [3,2,1]
Output: 1
Explanation: The third maximum is 1.
Example 2:

Input: nums = [1,2]
Output: 2
Explanation: The third maximum does not exist, so the maximum (2) is returned instead.

https://leetcode.com/problems/third-maximum-number/
//////////////////////////////////////////////////
*/
