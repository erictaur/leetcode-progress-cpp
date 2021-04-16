class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<int> comp1(26, 0);
        vector<int> comp2(26, 0);
        
        vector<string> ans;
        
        for(auto c : A[0]){
            comp1[c-'a']++;
        }
        
        for(int i=1; i<A.size(); i++){
            for(auto c : A[i]){
                comp2[c-'a']++;
            }
            
            for(int j=0; j<26; j++){
                comp1[j] = min(comp1[j], comp2[j]);
                comp2[j] = 0;
            }
        }
        
        for(int i=0; i<26; i++){
            if(comp1[i] > 0){
                int num = comp1[i];
                while(num){
                    //string str(num, i+'a');
                    string str(1, i+'a');
                    ans.push_back(str);
                    num--;
                }
            }
        }
        
        return ans;
    }
};


/* 1002. Find-Common-Characters.cpp
//////////////////////////////////////////////////
Given an array A of strings made only from lowercase letters, return a list of all characters that show up in all strings within the list (including duplicates).  
For example, if a character occurs 3 times in all strings but not 4 times, you need to include that character three times in the final answer.

You may return the answer in any order.

Input: ["bella","label","roller"]
Output: ["e","l","l"]

https://leetcode.com/problems/find-common-characters/
//////////////////////////////////////////////////
*/
