class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> uset(nums.begin(), nums.end());
        int ans = 1;
        
        for(auto num : nums){
            if(uset.find(num) == uset.end()){
                continue;
            }
            uset.erase(num);
            
            int prev = num - 1;
            int next = num + 1;
            while(uset.find(prev) != uset.end()){
                uset.erase(prev);
                prev--;
            }
            while(uset.find(next) != uset.end()){
                uset.erase(next);
                next++;
            }
            
            ans = max(ans, (next-1)-(prev+1)+1);
        }
        
        return nums.size()==0 ? 0 : ans;
    }
};

/* 128. Longest-Consecutive-Sequence.cpp
//////////////////////////////////////////////////
Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
You must write an algorithm that runs in O(n) time.

Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

https://leetcode.com/problems/longest-consecutive-sequence/
//////////////////////////////////////////////////
*/
