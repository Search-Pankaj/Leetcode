class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // important concept 
        for(int i = 0 ; i<nums.size();i++){
            if(nums[i]>0 and nums[i] <= nums.size()){
                int pos = nums[i] - 1 ;
                if(nums[i] != nums[pos]){
                    swap(nums[i],nums[pos]);
                    i-- ;
                }
            }
        }
        for(int i = 0; i<nums.size();i++){
            if(nums[i] != i+1) return i + 1 ;
        }
        return nums.size()+1;
    }
};