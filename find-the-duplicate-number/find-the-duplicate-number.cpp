class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         
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
            if(nums[i] != i+1) return nums[i] ;
        }
        return nums.size()+1;
    }
};