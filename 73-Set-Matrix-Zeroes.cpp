class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int last_r_0 = -1;
        
        int R = matrix.size();
        int C = matrix[0].size();
        
        // Find last row that includes 0
        for(int i=R-1; i>=0 && last_r_0==-1; i--){
            for(int j=0; j<C; j++){
                if(matrix[i][j] == 0){
                    last_r_0 = i;
                    break;
                }
            }
        }
        
        if(last_r_0 == -1) return;
        
        for(int row=0; row<last_r_0; row++){
            bool row_is_0 = false;
            // detect 0's in each row
            for(int col=0; col<C; col++){
                if(matrix[row][col] == 0){
                    row_is_0 = true;
                    matrix[last_r_0][col] = 0;
                }
            }
            if(row_is_0){
                for(int col=0; col<C; col++){
                    matrix[row][col] = 0;
                }
            }
        }
        
        // Set other columns to 0 based on configured last row
        for(int row=0; row<R; row++){
            for(int col=0; col<C; col++){
                if(matrix[last_r_0][col] == 0){
                    matrix[row][col] = 0;
                }
            }
        }
        
        // Clear out last row to all 0s
        for(int col=0; col<C; col++){
            matrix[last_r_0][col] = 0;
        }
    }
};

/* 73. Set-Matrix-Zeroes.cpp
//////////////////////////////////////////////////
Given an m x n matrix. If an element is 0, set its entire row and column to 0. Do it in-place.

Follow up:

A straight forward solution using O(mn) space is probably a bad idea.
A simple improvement uses O(m + n) space, but still not the best solution.
Could you devise a constant space solution?

Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]

https://leetcode.com/problems/set-matrix-zeroes/
//////////////////////////////////////////////////
*/
