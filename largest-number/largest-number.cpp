class Solution {
public:
    static bool check(string &s1 , string &s2){
            return (s1+s2)>=(s2+s1) ;
        }
    string largestNumber(const vector<int> &A) {
    
    
    int x=0;
    for(int i =0; i<A.size() ; i++){
        if(A[i] == 0){ x++ ;}
    }
    if(A.size() == x){return "0";}
    
    vector<string> s(A.size()," ");
    
        for(int i=0;i<A.size();i++){
        s[i] = to_string(A[i]);
        }
        
        
        sort(s.begin(),s.end(),check);
        
        string ans ="";
        
        for (int i = 0; i<s.size() ;i++){
            ans += s[i];
        }
       return ans;
    
}







};