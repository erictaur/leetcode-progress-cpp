class Solution {
public:
    vector<string> letterCombinations(string digits) {              
        vector<string> pad;
        pad.push_back("abc");
        pad.push_back("def");
        pad.push_back("ghi");
        pad.push_back("jkl");
        pad.push_back("mno");
        pad.push_back("pqrs");
        pad.push_back("tuv");
        pad.push_back("wxyz");
        
        string cur;
        vector<string> ans;
        if(digits.size() == 0) return ans;
        
        dfs(cur, pad, digits, 0, ans);
        
        return ans;
    }
    
    void dfs(string cur, vector<string>& pad, string digits, int atdigit, vector<string>& ans){
        if(atdigit == digits.size()){
            ans.push_back(cur);
            return;
        }
        for(int i=0; i<pad[digits[atdigit]-'2'].size(); i++){
            cur.push_back(pad[digits[atdigit]-'2'][i]);
            dfs(cur, pad, digits, atdigit+1, ans);
            cur.pop_back();
        }
    }
};

/* 17. Letter-Combinations-of-a-Phone-Number.cpp
//////////////////////////////////////////////////
Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. 
Return the answer in any order.

A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

https://leetcode.com/problems/letter-combinations-of-a-phone-number/
//////////////////////////////////////////////////
*/
