class Solution {
public:
    bool isPalindrome(string A) {
           int start = 0 ;
    int end  = A.length() - 1;
    while(start <= end){
        while(start < end and !isalnum(A[start])) start++ ;
        while(start < end  and !isalnum(A[end])) end-- ;
        if(toupper(A[start]) != toupper(A[end])){
            return 0;
        }
        else{
            start++ ;
            end-- ;
        }
    }
    return 1 ;
    }
};