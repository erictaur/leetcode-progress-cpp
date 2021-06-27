class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int lp = 0;
        int rp = 0;
        int ans = 0;
        
        map<char, int> hmap;
        
        while(rp < s.length()){
            
            if(hmap.find(s[rp]) == hmap.end()){
                hmap.insert({s[rp], 0});
            }
            hmap[s[rp]]++;
            
            while(hmap[s[rp]] > 1){               
                hmap[s[lp]]--;
                lp++;
            }
            
            ans = max(ans, rp-lp+1);
            
            rp++;
        }
        
        return ans;
    }
};

/* 3 Longest-Substring-Without-Repeating-Characters.cpp
//////////////////////////////////////////////////
Given a string s, find the length of the longest substring without repeating characters.

Example:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.


https://leetcode.com/problems/longest-substring-without-repeating-characters/
//////////////////////////////////////////////////
*/