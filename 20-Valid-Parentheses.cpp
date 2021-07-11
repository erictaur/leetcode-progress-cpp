class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for(int i=0; i<s.length(); i++){
            if(s[i] == '(' ||
               s[i] == '[' ||
               s[i] == '{'){
                st.push(s[i]);
            }
            else{
                if(st.empty()) return false;
                
                if(s[i] == '}'){
                    if(st.top() != '{') return false;
                }
                if(s[i] == ']'){
                    if(st.top() != '[') return false;
                }
                if(s[i] == ')'){
                    if(st.top() != '(') return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};

/* 20. Valid-Parentheses.cpp
//////////////////////////////////////////////////
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.

Input: s = "()[]{}"
Output: true

https://leetcode.com/problems/valid-parentheses/
//////////////////////////////////////////////////
*/
