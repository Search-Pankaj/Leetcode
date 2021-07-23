class Solution {
public:
    int findMin(vector<int>& nums) {
       int end = nums.size()-1;
        int start = 0 ;
        int mini = INT_MAX;
        while(start<=end){
            int mid = start + (end-start)/2 ;
            if(nums[mid] > nums[end] ){
                mini = min(mini,nums[mid]);
                start = mid + 1;
            }
            else{
                 mini = min(mini,nums[mid]);
                end = mid -1 ;
            }
        }
        return mini;
    }
};