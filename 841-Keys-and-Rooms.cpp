class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_set<int> visit;
        dfs(rooms, 0, visit);
        
        return (rooms.size() == visit.size());
    }
    
    void dfs(vector<vector<int>>& rooms, int cur, unordered_set<int>& visit){
        if(visit.count(cur)) return;
        visit.insert(cur);
        
        for(auto togo : rooms[cur]){
            dfs(rooms, togo, visit);
        }
    }
};


/* 841. Keys-and-Rooms.cpp
//////////////////////////////////////////////////
There are N rooms and you start in room 0.  
Each room has a distinct number in 0, 1, 2, ..., N-1, and each room may have some keys to access the next room. 

Formally, each room i has a list of keys rooms[i], and each key rooms[i][j] is an integer in [0, 1, ..., N-1] where N = rooms.length.  
A key rooms[i][j] = v opens the room with number v.

Initially, all the rooms start locked (except for room 0). 
You can walk back and forth between rooms freely.

Return true if and only if you can enter every room.

Input: [[1],[2],[3],[]]
Output: true
Explanation:  
We start in room 0, and pick up key 1.
We then go to room 1, and pick up key 2.
We then go to room 2, and pick up key 3.
We then go to room 3.  Since we were able to go to every room, we return true.

Input: [[1,3],[3,0,1],[2],[0]]
Output: false
Explanation: We can't enter the room with number 2.

https://leetcode.com/problems/keys-and-rooms/
//////////////////////////////////////////////////
*/
