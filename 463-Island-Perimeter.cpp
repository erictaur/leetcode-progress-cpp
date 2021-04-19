class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int blocks=0, connect=0;
        
        for(int row=0; row<grid.size(); row++){
            for(int col=0; col<grid[row].size(); col++){
                if(grid[row][col]){
                    blocks++;
                    if(row!=0 && grid[row-1][col]) connect++;
                    if(col!=0 && grid[row][col-1]) connect++;
                }
            }
        }
        
        return blocks*4-connect*2;
    }
};

/* 463. Island-Perimeter.cpp
//////////////////////////////////////////////////
You are given row x col grid representing a map where grid[i][j] = 1 represents land and grid[i][j] = 0 represents water.

Grid cells are connected horizontally/vertically (not diagonally). 
The grid is completely surrounded by water, and there is exactly one island (i.e., one or more connected land cells).

The island doesn't have "lakes", meaning the water inside isn't connected to the water around the island. 
One cell is a square with side length 1. 
The grid is rectangular, width and height don't exceed 100. Determine the perimeter of the island.

Input: grid = [[0,1,0,0],[1,1,1,0],[0,1,0,0],[1,1,0,0]]
Output: 16
Explanation: The perimeter is the 16 yellow stripes in the image above.

https://leetcode.com/problems/island-perimeter/
//////////////////////////////////////////////////
*/
