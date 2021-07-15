class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int sop = nums.size();
        vector<int> vec(sop,-1);
        for(int i = 0 ;i< nums.size();i++){
            bool boool = true ;
            int a = nums[i];
            for(int j = i+1 ; j<nums.size();j++){
                if(a < nums[j]){
                    vec[i] = nums[j] ;
                    boool = false ;
                    break ;
                } 
            }
            if(boool){
                for(int j = 0 ; j<i ;j++){
                    if(a < nums[j]){
                    vec[i] = nums[j] ;
                    boool = false ;
                    break ;
                } 
                }
            }
        }
        return vec;
    }
};