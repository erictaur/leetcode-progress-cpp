class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = 0; i < nums2.size(); i++){
            nums1.push_back(nums2[i]);
        }
        nums1.erase(std::remove(nums1.begin(), nums1.end(), 0), nums1.end());
        
        while(nums1.size() != n+m){
            nums1.push_back(0);
        }
        return std::sort(nums1.begin(), nums1.end());
    }
};

/* 88. Merge-Sorted-Array.cpp
//////////////////////////////////////////////////
Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

The number of elements initialized in nums1 and nums2 are m and n respectively. 
You may assume that nums1 has a size equal to m + n such that it has enough space to hold additional elements from nums2.

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]

https://en.wikibooks.org/wiki/More_C++_Idioms/Erase-Remove
//////////////////////////////////////////////////
*/
