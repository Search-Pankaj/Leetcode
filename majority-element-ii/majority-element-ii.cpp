class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> sop ;
        for(int i : nums){
            sop[i]++;
        }
        // for(auto it = sop.begin() ; it<sop.end() ;it++){
        //     if(sop[])
        // }
        int n = nums.size()/3 ;
        vector<int>ans;
    
        for(auto i :sop){
            if(i.second > n ) ans.push_back(i.first);
        }
        return ans ;
    }
};