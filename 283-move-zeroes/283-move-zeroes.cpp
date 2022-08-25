class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=-1;
        int r =0;
        while(r<nums.size()){
            if(nums[r]!=0){
                swap(nums[++l], nums[r++]);
            }else{
                r++;
            }
        }
    }
};