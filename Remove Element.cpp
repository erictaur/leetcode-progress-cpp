class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int init_len = nums.size();
        
        for(int i = 0; i < init_len; i++){
            if(nums[i] == val){
                nums.erase(nums.begin() + i);
                init_len--;
                i--;
            }
        }
        return nums.size();
    }
};
