class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vec;
        map<int,int> set ;
        int size = nums.size() - 1 ;
      
        for(int i = 0 ;i<= size  ; i++){
            if(set.count(target - nums[i]) ){
                vec.push_back(set[target - nums[i]]) ;
                vec.push_back( i) ;
            }
            
            else{
               set[nums[i]] = i ;  
            }
               
            
        }
        return vec ;
    }
};