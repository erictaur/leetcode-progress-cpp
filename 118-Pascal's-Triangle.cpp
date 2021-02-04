class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> vec;
        vector<int> temp;
        
        for(int i = 0; i < numRows; i++){
            temp.clear();
            if (i == 0){
                temp.push_back(1);
                vec.push_back(temp);
            }
            else if(i == 1){
                temp.push_back(1);
                temp.push_back(1);
                vec.push_back(temp);
            }
            else{
                for(int j = 0; j <= i; j++){
                    if(j == 0 || j == i){
                        temp.push_back(1);
                    }
                    else{
                        temp.push_back(vec[i-1][j-1] + vec[i-1][j]);
                    }
                }
                vec.push_back(temp);
            }
        }
        return vec;
    }
};


/* 118. Pascal's-Triangle.cpp
//////////////////////////////////////////////////
Given a non-negative integer numRows, generate the first numRows of Pascal's triangle.


Input: 5
Output:
[
     [1],
    [1,1],
   [1,2,1],
  [1,3,3,1],
 [1,4,6,4,1]
]

https://leetcode.com/problems/pascals-triangle/
//////////////////////////////////////////////////
*/
