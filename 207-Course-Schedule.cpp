class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph = setGraph(prerequisites, numCourses);
        
        vector<int> visited;
        
        for(int course = 0; course < numCourses; course++){
            vector<int> visiting;
            if(find(visited.begin(), visited.end(), course) != visited.end()) continue;
            if(!dfs(graph, visiting, visited, course)) return false;
        }

        return true;
    }
    
    vector<vector<int>> setGraph(vector<vector<int>>& allReqs, int numCourses){
        vector<vector<int>> adjList(numCourses);
        for(vector<int> list : allReqs){
            adjList[list[1]].push_back(list[0]);
        }
        return adjList;
    }
    
    bool dfs(vector<vector<int>>& graph, vector<int>& visiting, vector<int>& visited, int node){

        if(find(visited.begin(), visited.end(), node) != visited.end()) return true;
        if(find(visiting.begin(), visiting.end(), node) != visiting.end()) return false;
        
        visiting.push_back(node);
        
        for(int neighbors = 0; neighbors < graph[node].size(); neighbors++){
            if(!dfs(graph, visiting, visited, graph[node][neighbors])) return false;
        }

        visited.push_back(node);
        visiting.pop_back();
        
        return true;
    }
};

/* 207. Course-Schedule.cpp
//////////////////////////////////////////////////
There are a total of numCourses courses you have to take, labeled from 0 to numCourses - 1. 
You are given an array prerequisites where prerequisites[i] = [ai, bi] indicates that you must take course bi first if you want to take course ai.

For example, the pair [0, 1], indicates that to take course 0 you have to first take course 1.
Return true if you can finish all courses. Otherwise, return false.

Example 1:

Input: numCourses = 2, prerequisites = [[1,0]]
Output: true
Explanation: There are a total of 2 courses to take. 
To take course 1 you should have finished course 0. So it is possible.

Example 2:

Input: numCourses = 2, prerequisites = [[1,0],[0,1]]
Output: false
Explanation: There are a total of 2 courses to take. 
To take course 1 you should have finished course 0, and to take course 0 you should also have finished course 1. So it is impossible.

Constraints:

1 <= numCourses <= 105
0 <= prerequisites.length <= 5000
prerequisites[i].length == 2
0 <= ai, bi < numCourses
All the pairs prerequisites[i] are unique.

https://leetcode.com/problems/course-schedule/
//////////////////////////////////////////////////
*/
