class Solution {
public:
    vector<vector<int>> ans;
    
    void prem(vector<int> &nums ,int i){
        if(i == nums.size()-1){
            ans.push_back(nums);
            return;
        }
       unordered_set<int> S;
        
        for(int j = i ; j<nums.size();j++){
          if(S.find(nums[j]) != S.end()) continue;
        S.insert(nums[j]);
            swap(nums[i],nums[j]);
            prem(nums,i+1);
             swap(nums[i],nums[j]);}
        }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        prem(nums,0);
        return ans;
    }
};