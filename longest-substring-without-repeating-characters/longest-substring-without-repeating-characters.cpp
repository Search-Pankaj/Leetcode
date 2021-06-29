class Solution {
public:
    int lengthOfLongestSubstring(string A) {
        int n = A.size();
        if(A.empty()) return 0 ;
        int i = -1 ;
        int j = 0;
        int max_l = 1;
        unordered_map<char,int> hash;
        while(j<n ){
            if(hash.find(A[j]) != hash.end()){
                i = max(i,hash[A[j]]);
            }
            max_l = max(max_l,j-i);
            hash[A[j]] = j;
            j++ ;
        }
        return max_l ;
    }
};