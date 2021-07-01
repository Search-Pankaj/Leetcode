class Solution {
public:
    void lettercode(string digit,vector<string> &res,string num[],int i,string s){
    if(i == digit.length()) {
        res.push_back(s);
        return ;
    }    
      string val = num[digit[i]- '0'] ;
        for(int j =0;j<val.length();j++){
        lettercode(digit,res,num,i+1,s+val[j]);          
        }
       
        }
    
    
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(!digits.length()) {
            return res;
        }
        string num[10] = {
           "" ,"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"       };
        lettercode(digits,res,num,0,"");
        return res;
    }
};