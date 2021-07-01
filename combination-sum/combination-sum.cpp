class Solution {
public:
    void helper(vector<int> &A , int index,int target, vector<int> curr,vector<vector<int>> &ans){
        if(target == 0) {
            ans.push_back(curr);    
        }
        if(target < 0 ) return ;
        for (int i =index ; i<A.size() ;i++){
            curr.push_back(A[i]);
            helper(A,i,target-A[i],curr,ans);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& A, int B) {
        sort(A.begin(),A.end());
        // remove duplicate
        A.erase(unique(A.begin(),A.end()),A.end());
        vector<int>curr = {};
        vector<vector<int>>ans ;
        helper(A,0,B,curr,ans);
        return ans ;
    }
};