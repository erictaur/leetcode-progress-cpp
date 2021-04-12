class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> mat(m, vector<int>(n, 0));
        
        int ans = 0;
        
        for(auto idx : indices){
            for(int i=0; i<n; i++){
                ++mat[idx[0]][i];
                ans = (mat[idx[0]][i]%2 != 0)? ++ans : (ans)? --ans : 0;
            }
            for(int j=0; j<m; j++){
                ++mat[j][idx[1]];
                ans = (mat[j][idx[1]]%2 != 0)? ++ans : (ans)? --ans : 0;
            }
        }
        
        return ans;
    }
};

/* 1252. Cells-with-Odd-Values-in-a-Matrix.cpp
//////////////////////////////////////////////////
There is an m x n matrix that is initialized to all 0's. 
There is also a 2D array indices where each indices[i] = [ri, ci] represents a 0-indexed location to perform some increment operations on the matrix.

For each location indices[i], do both of the following:

Increment all the cells on row ri.
Increment all the cells on column ci.
Given m, n, and indices, return the number of odd-valued cells in the matrix after applying the increment to all locations in indices.

Input: m = 2, n = 3, indices = [[0,1],[1,1]]
Output: 6
Explanation: Initial matrix = [[0,0,0],[0,0,0]].
After applying first increment it becomes [[1,2,1],[0,1,0]].
The final matrix is [[1,3,1],[1,3,1]], which contains 6 odd numbers.

https://leetcode.com/problems/cells-with-odd-values-in-a-matrix/
//////////////////////////////////////////////////
*/
