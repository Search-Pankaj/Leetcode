class Solution {
public:
    int findDuplicate(vector<int>& nums) {
     set<int> sop ;    
        for(int i = 0 ; i<nums.size();i++){
        if(sop.find(nums[i]) != sop.end()) return nums[i] ;
        sop.insert(nums[i]);
    }
        return -1 ;
    }
};