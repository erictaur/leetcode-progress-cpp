class Solution {
public:

const vector<pair<int, int>> moves = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {

    int m = heights.size();
    int n = heights[0].size();

    vector<vector<bool>> pacific_h(m, vector<bool>(n, false));
    vector<vector<bool>> atlantic_h(m, vector<bool>(n, false));

    vector<vector<int>> ans;

    for(int i=0; i<m; i++){
        dfs(heights, pacific_h, i, 0);
        dfs(heights, atlantic_h, i, n-1);
    }

    for(int j=0; j<n; j++){
        dfs(heights, pacific_h, 0, j);
        dfs(heights, atlantic_h, m-1, j);
    }

    for(int x=0; x<m; x++){
        for(int y=0; y<n; y++){
            if(pacific_h[x][y] && atlantic_h[x][y]){
                ans.push_back({x, y});
            }
        }
    }

    return ans;
}


void dfs(vector<vector<int>>& heights, vector<vector<bool>>& map, int i, int j){
    map[i][j] = true;

    int next_i;
    int next_j;

    // DFS procedure
    for(auto move : moves){
        next_i = i + move.first;
        next_j = j + move.second;

        if(inbound(next_i, next_j, heights) 
                    && !map[next_i][next_j] 
                    && heights[next_i][next_j] >= heights[i][j]){
            dfs(heights, map, next_i, next_j);
        }
    }
}

bool inbound(int x, int y, vector<vector<int>> &grid){
    return x >=0 && x < grid.size() && y >=0 && y < grid[0].size();
}
    
};

/* 417. Pacific-Atlantic-Water-Flow.cpp
//////////////////////////////////////////////////
There is an m x n rectangular island that borders both the Pacific Ocean and Atlantic Ocean. 
The Pacific Ocean touches the island's left and top edges, and the Atlantic Ocean touches the island's right and bottom edges.

The island is partitioned into a grid of square cells. 
You are given an m x n integer matrix heights where heights[r][c] represents the height above sea level of the cell at coordinate (r, c).

The island receives a lot of rain, and the rain water can flow to neighboring cells directly north, south, east, and west 
if the neighboring cell's height is less than or equal to the current cell's height. 

Water can flow from any cell adjacent to an ocean into the ocean.

Return a 2D list of grid coordinates result where result[i] = [ri, ci] denotes that rain water can flow from cell (ri, ci) to both the Pacific and Atlantic oceans.

Input: heights = [[1,2,2,3,5],[3,2,3,4,4],[2,4,5,3,1],[6,7,1,4,5],[5,1,1,2,4]]
Output: [[0,4],[1,3],[1,4],[2,2],[3,0],[3,1],[4,0]]

https://leetcode.com/problems/pacific-atlantic-water-flow/
//////////////////////////////////////////////////
*/
