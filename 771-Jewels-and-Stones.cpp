class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> stone;
        
        int ans = 0;
        
        for(int i=0; i<stones.size(); i++){
            if(stone.find(stones[i]) == stone.end()){
                stone[stones[i]] = 1;
            }
            else{
                stone[stones[i]]++;
            }
        }
        
        for(auto jewel : jewels){
            ans += stone[jewel];
        }
        
        return ans;
    }
};

/* 771. Jewels-and-Stones.cpp
//////////////////////////////////////////////////
You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. 
Each character in stones is a type of stone you have. 
You want to know how many of the stones you have are also jewels.

Letters are case sensitive, so "a" is considered a different type of stone from "A".

Example:
Input: jewels = "aA", stones = "aAAbbbb"
Output: 3

https://leetcode.com/problems/jewels-and-stones/
//////////////////////////////////////////////////
*/
