class Solution {
public:
    string countAndSay(int n) {
        if(n == 0) return "";
        if(n == 1) return "1";
        
        string prev = "1";
        string current  = prev;
        
        for(int size = 2 ; size<=n ; size ++){
            current.clear();
            
            for(int j = 0 ;j<prev.length();j++){
                int count = 1;
                while((j+1 <prev.length()) && (prev[j] == prev[j+1]) ){
                    count++ ;
                    j++ ;
                }
                current += to_string(count) + prev[j];
                
            }
            prev = current ;
        }
        return current;
    }
};