class Solution {
public:
    string longestPalindrome(string s) {
        
        if(s.length() <= 1) return s;
        
        vector<vector<bool>> table(s.length(), vector<bool>(s.length()));
        
        for(int i=0; i<s.length(); i++){
            table[i][i] = true;
        }
        
        int start_idx = 0;
        int maxlength = 1;
        
        for(int start=s.length()-1; start>=0; start--){
            for(int end=start+1; end<s.length(); end++){
                if(s[start] == s[end]){
                    if(end-start == 1 || table[start+1][end-1] == true){
                        table[start][end] = true;
                        if(end-start+1 >= maxlength){
                            start_idx = start;
                            maxlength = end-start+1;
                        }
                    }
                }
            }
        }
        
        return s.substr(start_idx, maxlength);
    }
};

/* 5. Longest-Palindromic-Substring.cpp
//////////////////////////////////////////////////
Given a string s, return the longest palindromic substring in s.

Input: s = "babad"
Output: "bab"
Note: "aba" is also a valid answer.

https://leetcode.com/problems/longest-palindromic-substring/
//////////////////////////////////////////////////
*/
