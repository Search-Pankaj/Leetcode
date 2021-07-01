class Solution {
public:
void sub(vector<int> &a,int ind,set<vector<int>> &ans,unordered_map<int,int> &used,vector<int> tmp) {
    ans.insert(tmp);
    for(int i=ind;i<a.size();i++)
    {
        if (used[a[i]] > 0) {
        tmp.push_back(a[i]);
        used[a[i]]--;
        sub(a,i+1,ans,used,tmp);
        tmp.pop_back();
        used[a[i]]++;
        }
    }
    return ;
}
    vector<vector<int>> subsetsWithDup(vector<int>& a) {
       sort(a.begin(),a.end());
    set<vector<int>> ans;
    unordered_map<int,int> mp;
    for(int i=0;i<a.size();i++)
    {
        mp[a[i]]++;
    }
    vector<int> tmp;
    sub(a,0,ans,mp,tmp);
    vector<vector<int>> v;
    for(auto it=ans.begin();it!=ans.end();it++)
    {
        v.push_back(*it);
    }
    return v;
    }
};