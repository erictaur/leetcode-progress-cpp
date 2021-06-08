class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        reverse(matrix.begin(), matrix.end());
        int i = matrix.size();
        int j = matrix[0].size();
        
        for(int x=0; x<i; x++){
            for(int y=0; y<x; y++){
                swap(matrix[x][y], matrix[y][x]);
            }
        }
    }
};

/* 48. Rotate-Image.cpp
//////////////////////////////////////////////////
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. 
DO NOT allocate another 2D matrix and do the rotation.

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]]

https://leetcode.com/problems/rotate-image/
//////////////////////////////////////////////////
*/
