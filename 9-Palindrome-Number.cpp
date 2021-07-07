class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x!=0 && x%10==0)) return false;
        
        int num=0;
        while(x>num){
            num = num*10 + x%10;
            x = x/10;
        }
        return (x == num) || (x == num/10);
    }
};

/* 9. Palindrome-Number.cpp
//////////////////////////////////////////////////
Given an integer x, return true if x is palindrome integer.
An integer is a palindrome when it reads the same backward as forward. 
For example, 121 is palindrome while 123 is not.

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. 
Therefore it is not a palindrome.

https://leetcode.com/problems/palindrome-number/
//////////////////////////////////////////////////
*/
