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

/* 961. N-Repeated-Element-in-Size-2N-Array.cpp
//////////////////////////////////////////////////
In a array A of size 2N, there are N+1 unique elements, and exactly one of these elements is repeated N times.

Return the element repeated N times.

 Example 1:

Input: [1,2,3,3]
Output: 3

Example 2:

Input: [2,1,2,5,3,2]
Output: 2

https://leetcode.com/problems/n-repeated-element-in-size-2n-array/
//////////////////////////////////////////////////
*/
