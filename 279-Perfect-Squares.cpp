class Solution {
public:
    int numSquares(int n) {
        vector<int> cnt(n+1, INT_MAX);
        
        cnt[0] = 0;
        for(int i=1; i<cnt.size(); i++){
            for(int j=1; j*j<=i; j++){
                cnt[i] = min(cnt[i], cnt[i-j*j]+1);
            }
        }
        
        return cnt.back();
    }
};

/* 279. Perfect-Squares.cpp
//////////////////////////////////////////////////
Given an integer n, return the least number of perfect square numbers that sum to n.

A perfect square is an integer that is the square of an integer; in other words, it is the product of some integer with itself. 

Example 1:

Input: n = 12
Output: 3
Explanation: 12 = 4 + 4 + 4.

https://leetcode.com/problems/perfect-squares/
//////////////////////////////////////////////////
*/
