class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int curr_max = nums[0];
        int curr_min = nums[0];
        int maxo = nums[0];
        for(int i = 1; i<nums.size() ;i++){
            int temp = curr_max ;
            curr_max = max(nums[i],max(curr_max*nums[i],curr_min*nums[i])) ;
            curr_min = min(nums[i],min(temp*nums[i],curr_min*nums[i])) ;
            maxo = max(curr_max,maxo);
            
        }
        return maxo ;
    }
};