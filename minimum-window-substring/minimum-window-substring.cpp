class Solution {
public:
    string minWindow(string s, string t) {
        // we will use old techn of  string expand and compress
        
        //using array as hashmap 
        int hash_main[255] = {0}; 
        int hash_sub[255] = {0};
        int min_len = INT_MAX ;
        int sop = -1;
        
        for(int i = 0 ; i< t.size() ;i++){
            hash_sub[t[i]]++ ;
        }
        
        int j = 0 ; int count =0;
        for(int i = 0 ; i< s.size() ;i++){
            hash_main[s[i]]++ ;
            
            if(hash_sub[s[i]] != 0 and hash_sub[s[i]] >= hash_main[s[i]]){
                count++ ;
            }
            if(count == t.size()){
                // here come the contraction part
                while(hash_sub[s[j]] == 0 || hash_sub[s[j]] < hash_main[s[j]] ){
                    hash_main[s[j]]--;
                    j++ ;
                }
                  if(min_len > i - j + 1 ){
                min_len = i - j + 1 ;
                sop = j ;
            }
            }
          
        }
        
        return sop == -1 ? "" : s.substr(sop,min_len) ;
    }
};