class Solution {
public:
    void genrate(vector<string> &ans,string res ,int max ,int open , int close ){
        if(res.size() == max*2){
            ans.push_back(res);
        }
        if(open<max){ 
            genrate(ans,res+'(',max,open+1,close);
        }
        
        if(close<open){ 
            genrate(ans,res+')',max,open,close+1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string res = "";
        genrate(ans,res,n,0,0);
        return ans ;
    }
};