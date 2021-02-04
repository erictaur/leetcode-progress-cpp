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


