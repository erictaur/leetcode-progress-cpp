class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        if(A.size() == 1) return true;
        
        vector<int> diff(A.size()-1, 0);
        
        for(int i=1; i<A.size(); i++){
            diff[i-1] = A[i] - A[i-1];
        }
        
        diff.erase(std::remove(diff.begin(), diff.end(), 0), diff.end());
        
        if(diff.size() > 1){
            for(int j=1; j<diff.size(); j++){
                if(diff[0] > 0){
                    if(diff[j] < 0) return false;
                }
                else{
                    if(diff[j] > 0) return false;
                }
            }
        }
        else{
            return true;
        }

        return true;
    }
};

/* 141. Linked-List-Cycle.cpp
//////////////////////////////////////////////////
An array is monotonic if it is either monotone increasing or monotone decreasing.
An array A is monotone increasing if for all i <= j, A[i] <= A[j].  
An array A is monotone decreasing if for all i <= j, A[i] >= A[j].
Return true if and only if the given array A is monotonic.

Example 1:

Input: [1,2,4,5]
Output: true

Example 2:

Input: [1,1,1]
Output: true

https://leetcode.com/problems/monotonic-array/
//////////////////////////////////////////////////
*/
