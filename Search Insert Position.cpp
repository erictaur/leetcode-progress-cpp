class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < target){
                if(i == nums.size()-1){
                    ans = nums.size();
                } 
                else if(target <= nums[i+1]){
                    ans = i+1;
                }
                else{
                    continue;
                }
            }
        }
        return ans;
    }
};
