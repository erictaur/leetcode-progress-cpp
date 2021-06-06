class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> umap;
        vector<vector<int>> buckets(nums.size()+1); //Freq starts at 1 not 0
        vector<int> ans;
        
        for(auto num : nums){
            umap[num]++;
        }
        
        for(auto i=umap.begin(); i!=umap.end(); i++){
            buckets[i->second].push_back(i->first);
        }
        reverse(buckets.begin(), buckets.end());
        
        for(auto bucket : buckets){
            for(auto num : bucket){
                ans.push_back(num);
                if(ans.size() == k){
                    return ans;
                }
            }
        }
        
        return ans;
    }  
};

/* 347. Top-K-Frequent-Elements.cpp
//////////////////////////////////////////////////
Given an integer array nums and an integer k, return the k most frequent elements. 
You may return the answer in any order.

Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]

https://leetcode.com/problems/top-k-frequent-elements/
//////////////////////////////////////////////////
*/
