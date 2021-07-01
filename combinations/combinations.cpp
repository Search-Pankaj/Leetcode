class Solution {
public:
    void helper(int n , int k ,vector<int> &curr,int i , vector<vector<int>> &ans ){
        if(k == 0){
            ans.push_back(curr);
            return ;
        }
        if(i>n){
            return ;
        }
        curr.push_back(i);
        helper(n,k-1,curr,i+1,ans);
        curr.pop_back();
        helper(n,k,curr,i+1,ans);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int>curr = {} ;
        helper(n,k,curr,1,ans);
        return ans ;
    }
};