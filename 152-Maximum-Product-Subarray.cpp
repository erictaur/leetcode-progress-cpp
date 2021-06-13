class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = INT_MIN;
        
        int cmin = 1;
        int cmax = 1;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i] < 0){
                swap(cmax, cmin);
            }
            
            cmax = max(cmax*nums[i], nums[i]);
            cmin = min(cmin*nums[i], nums[i]);
            
            ans = max(ans, cmax);
        }
        
        return ans;
    }
};

/* 152. Maximum-Product-Subarray.cpp
//////////////////////////////////////////////////Given an integer array nums, 
find a contiguous non-empty subarray within the array that has the largest product, and return the product.

It is guaranteed that the answer will fit in a 32-bit integer.
A subarray is a contiguous subsequence of the array.

Input: nums = [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.

https://leetcode.com/problems/maximum-product-subarray/
//////////////////////////////////////////////////
*/
