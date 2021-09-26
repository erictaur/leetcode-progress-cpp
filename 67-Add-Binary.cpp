class Solution {
public:
    string addBinary(string a, string b) {
        
        int la = a.size()-1;
        int lb = b.size()-1;
        int car = 0;
        
        string sum = "";
        
        while(la>=0 || lb>=0 || car>0){
            car +=  la>=0? a[la--] - '0' : 0;
            car +=  lb>=0? b[lb--] - '0' : 0;
            
            sum = char(car%2 + '0') + sum;
            car /= 2;
        }
        
        return sum;
    }
};

/* 67. Add-Binary.cpp
//////////////////////////////////////////////////
Given two binary strings a and b, return their sum as a binary string.

Input: a = "11", b = "1"
Output: "100"

https://leetcode.com/problems/add-binary/
//////////////////////////////////////////////////
*/
