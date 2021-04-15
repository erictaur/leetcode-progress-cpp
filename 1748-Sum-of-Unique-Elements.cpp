class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        unordered_map<int, int> umap;
        int ans = 0;
        
        for(auto num : nums){
            if(umap.find(num) == umap.end()){
                umap[num] = 1;
            }
            else{
                umap[num]++;
            }
        }
        
        unordered_map<int, int>::iterator it;
        for(it = umap.begin(); it != umap.end(); it++){
            if(it->second == 1){
                ans += it->first;
            }
        }
        
        return ans;
    }
};

/* 1748. Sum-of-Unique-Elements.cpp
//////////////////////////////////////////////////
You are given an integer array nums. 
The unique elements of an array are the elements that appear exactly once in the array.
Return the sum of all the unique elements of nums.

Input: nums = [1,2,3,2]
Output: 4
Explanation: The unique elements are [1,3], and the sum is 4.

https://leetcode.com/problems/sum-of-unique-elements/
//////////////////////////////////////////////////
*/
