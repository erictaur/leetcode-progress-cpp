class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_set<int> uset;
        
        for(auto num : A){
            if(uset.count(num)){
                return num;
            }
            uset.insert(num);
        }
        
        return 0;
    }
};


/* 1207. Unique-Number-of-Occurrences.cpp
//////////////////////////////////////////////////
Given an array of integers arr, write a function that returns true if and only 
if the number of occurrences of each value in the array is unique.

Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

https://leetcode.com/problems/unique-number-of-occurrences/
//////////////////////////////////////////////////
*/
