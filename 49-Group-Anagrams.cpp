class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> umap;
        
        for(string s : strs){
            string ph = s;
            sort(ph.begin(), ph.end());
            
            umap[ph].push_back(s);
        }
        
        for(auto& e : umap){
            ans.push_back(e.second);
        }
        
        return ans;
    }
};

/* 49. Group-Anagrams.cpp
//////////////////////////////////////////////////
Given an array of strings strs, group the anagrams together. 
You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

https://leetcode.com/problems/group-anagrams/
//////////////////////////////////////////////////
*/
