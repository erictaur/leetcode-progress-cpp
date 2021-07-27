class Solution {
public:
    int mySqrt(int x) {
        int lp = 0;
        int rp = x;
        int ans = 0;
        
        while(lp <= rp){
            
            long long mid = (lp+rp)/2;
            
            if(mid*mid == x){
                return mid;
            }
            else if(mid*mid < x){
                lp = mid+1;
                ans = mid;
            }
            else{
                rp = mid-1;
            }
        }
        
        return ans;
    }
};

/* 69. Sqrt(x).cpp
//////////////////////////////////////////////////
Given a non-negative integer x, compute and return the square root of x.
Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned.

Note: You are not allowed to use any built-in exponent function or operator, such as pow(x, 0.5) or x ** 0.5.

Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since the decimal part is truncated, 2 is returned.

https://leetcode.com/problems/sqrtx/
//////////////////////////////////////////////////
*/
