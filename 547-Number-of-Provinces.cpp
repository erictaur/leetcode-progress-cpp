class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        unordered_set<int> visited;
        int num = 0;
        
        for(int i = 0; i < isConnected.size(); i++){
            if(visited.find(i) == visited.end()){
                num++;
                dfs(isConnected, i, isConnected.size(), visited);                
            }
        }
        return num;
    }
    void dfs(vector<vector<int>>& isConnected, int at, int n, unordered_set<int>& visited){
        visited.insert(at);
        for(int i = 0; i < n; i++){
            if(visited.find(i) == visited.end() && i != at && isConnected[at][i]){
                dfs(isConnected, i, n, visited);    
            }
        }
    }
};

/* 547. Number-of-Provinces.cpp
//////////////////////////////////////////////////
There are n cities. Some of them are connected, while some are not. 
If city a is connected directly with city b, and city b is connected directly with city c, then city a is connected indirectly with city c.

A province is a group of directly or indirectly connected cities and no other cities outside of the group.
You are given an n x n matrix isConnected where isConnected[i][j] = 1 if the ith city and the jth city are directly connected, and isConnected[i][j] = 0 otherwise.

Return the total number of provinces.

Input: isConnected = [[1,1,0],[1,1,0],[0,0,1]]
Output: 2

https://leetcode.com/problems/number-of-provinces/
//////////////////////////////////////////////////
*/
