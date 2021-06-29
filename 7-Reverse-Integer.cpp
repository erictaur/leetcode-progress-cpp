class Solution {
public:
    int reverse(int x) {
        
        int  neg   = x>0 ? 1 : -1;
        int  ans   = 0;
        
        if(x == 0) return 0;
        
        int x_abs = abs(x);
        while(x_abs > 0){
            if(ans > INT_MAX/10) return 0;
            
            ans = ans*10 + x_abs%10;
            x_abs = x_abs/10;
        }
        
        return x>0 ? ans : neg*ans;
    }
};

/* 7. Reverse-Integer.cpp
//////////////////////////////////////////////////
Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Input: x = -123
Output: -321

Input: x = 120
Output: 21

https://leetcode.com/problems/reverse-integer/
//////////////////////////////////////////////////
*/
