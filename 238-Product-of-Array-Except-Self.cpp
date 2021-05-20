class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(), 1);
        
        int shift_from_left = 1;
        int shift_from_right = 1;
        
        for(int i=0; i<ans.size(); i++){
            ans[i] *= shift_from_left;
            shift_from_left *= nums[i];
            
            ans[ans.size()-1-i] *= shift_from_right;
            shift_from_right *= nums[ans.size()-1-i];
        }
        
        return ans;
    }
};

/* 238. Product-of-Array-Except-Self.cpp
//////////////////////////////////////////////////
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
You must write an algorithm that runs in O(n) time and without using the division operation.

Input: nums = [1,2,3,4]
Output: [24,12,8,6]

https://leetcode.com/problems/product-of-array-except-self/
//////////////////////////////////////////////////
*/
