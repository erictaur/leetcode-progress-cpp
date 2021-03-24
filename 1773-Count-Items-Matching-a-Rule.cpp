class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int idx = (ruleKey == "type") ? 0 : (ruleKey == "color") ? 1 : 2;
        
        return count_if(items.begin(), items.end(), [&](auto &i){return i[idx] == ruleValue;});
    }
};

/* 1773. Count-Items-Matching-a-Rule.cpp
//////////////////////////////////////////////////
You are given an array items, where each items[i] = [typei, colori, namei] describes the type, color, and name of the ith item. 
You are also given a rule represented by two strings, ruleKey and ruleValue.

The ith item is said to match the rule if one of the following is true:

ruleKey == "type" and ruleValue == typei.
ruleKey == "color" and ruleValue == colori.
ruleKey == "name" and ruleValue == namei.
Return the number of items that match the given rule.

Example 1:

Input: items = [["phone","blue","pixel"],["computer","silver","lenovo"],["phone","gold","iphone"]], ruleKey = "color", ruleValue = "silver"
Output: 1
Explanation: There is only one item matching the given rule, which is ["computer","silver","lenovo"].

https://leetcode.com/problems/count-items-matching-a-rule/
//////////////////////////////////////////////////
*/
