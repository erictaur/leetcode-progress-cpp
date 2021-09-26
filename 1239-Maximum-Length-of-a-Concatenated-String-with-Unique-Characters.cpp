class Solution {
public:
    int maxLength(vector<string>& arr) {
        // word-bit vector
        vector<bitset<26>> wv;
        
        for(string s : arr){
            // bit vector
            bitset<26> bv;
            for(char c : s){
                bv.set(c-'a');
            }
            
            if(bv.count() == s.size()){
                wv.push_back(bv);
            }
        }
        
        return dfs(wv, bitset<26>(), 0);
    }
    
    int dfs(vector<bitset<26>>& wv, bitset<26> bs, int depth){
        int ans = bs.count();
        
        for(int i=depth; i<wv.size(); i++){
            if(!(bs & wv[i]).any()){
                ans = max(dfs(wv, bs | wv[i], i+1), ans);
            }
        }
        return ans;
    }
};

/* 1. Two-Sum.cpp
//////////////////////////////////////////////////
Given an array of strings arr. String s is a concatenation of a sub-sequence of arr which have unique characters.

Return the maximum possible length of s.

Input: arr = ["un","iq","ue"]
Output: 4
Explanation: All possible concatenations are "","un","iq","ue","uniq" and "ique".
Maximum length is 4.

https://leetcode.com/problems/maximum-length-of-a-concatenated-string-with-unique-characters/
//////////////////////////////////////////////////
*/
