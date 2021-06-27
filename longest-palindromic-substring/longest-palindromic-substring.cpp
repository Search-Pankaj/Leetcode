class Solution {
public:
    string expand(string A ,int l,int r)
 {      int n = A.length() ;
        while(l>= 0 and r< n and  A[l] == A[r] ){
            l--;
            r++ ;
        }
        return A.substr(l+1,r-l-1);
}
    string longestPalindrome(string A) {
        int n = A.length();
if (n == 0) return "";

string longest = A.substr(0,1) ;
for(int i = 0 ; i < n-1 ;i++){
    string p1 = expand(A,i,i);
    if(p1.length() > longest.length()){
        longest = p1;
    }
    string p2 = expand(A,i,i+1) ;
    if(p2.length() > longest.length() ){
        longest = p2;
    }
}
    return longest ;
    }
};