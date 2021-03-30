class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        
        pair<int, int> rook_pos;
        
        int capture = 0;
        
        for(int row=0; row<board.size(); row++){
            for(int col=0; col<board.size(); col++){
                if(board[row][col] == 'R'){
                    rook_pos.first = row;
                    rook_pos.second = col;
                }
            }
        }
        
        // Right
        int right = rook_pos.second+1;
        while(right < board.size()){
            if(board[rook_pos.first][right] == 'B'){
                break;
            }
            else if(board[rook_pos.first][right] == 'p'){
                capture++;
                break;
            }
            right++;
        }
        
        // Left
        int left = rook_pos.second-1;
        while(left >= 0){
            if(board[rook_pos.first][left] == 'B'){
                break;
            }
            else if(board[rook_pos.first][left] == 'p'){
                capture++;
                break;
            }
            left--;
        }

        // Top
        int top = rook_pos.first-1;
        while(top >= 0){
            if(board[top][rook_pos.second] == 'B'){
                break;
            }
            else if(board[top][rook_pos.second] == 'p'){
                capture++;
                break;
            }
            top--;
        }
        
        // Bottom
        int bottom = rook_pos.first+1;
        while(bottom < board.size()){
            if(board[bottom][rook_pos.second] == 'B'){
                break;
            }
            else if(board[bottom][rook_pos.second] == 'p'){
                capture++;
                break;
            }
            bottom++;
        }
        
        return capture;
    }
};

/* 999. Available-Captures-for-Rook.cpp
//////////////////////////////////////////////////
On an 8 x 8 chessboard, there is exactly one white rook 'R' and some number of white bishops 'B', black pawns 'p', and empty squares '.'.

When the rook moves, it chooses one of four cardinal directions (north, east, south, or west), 
then moves in that direction until it chooses to stop, reaches the edge of the board, captures a black pawn, or is blocked by a white bishop. 

A rook is considered attacking a pawn if the rook can capture the pawn on the rook's turn. 
The number of available captures for the white rook is the number of pawns that the rook is attacking.

Return the number of available captures for the white rook.

Input: board = [[".",".",".",".",".",".",".","."],
[".",".",".","p",".",".",".","."],
[".",".",".","R",".",".",".","p"],
[".",".",".",".",".",".",".","."],
[".",".",".",".",".",".",".","."],
[".",".",".","p",".",".",".","."],
[".",".",".",".",".",".",".","."],
[".",".",".",".",".",".",".","."]]
Output: 3
Explanation: In this example, the rook is attacking all the pawns.

https://leetcode.com/problems/available-captures-for-rook/
//////////////////////////////////////////////////
*/
