class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        
        unordered_map<string,vector<string>> group;
        
        for(int i=0;i<strs.size();i++){
            string copy = strs[i];
            sort(copy.begin(),copy.end());
            group[copy].push_back(strs[i]);
        }
        
        for(auto it=group.begin();it!= group.end();it++){
            ans.push_back(it->second);
        }
        
        return ans;
    }
};