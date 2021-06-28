class Solution {
public:
    void nextPermutation(vector<int>& A) {
           int n = A.size();
     int i ;
     int j;
     for(i = n-2 ;i >=0 ;i--){
         if(A[i] < A[i+1]) break;
     }
     if(i == -1){
         sort(A.begin(),A.end());
         return  ;
     }
     for(j = n - 1 ; j>= 0 ; j--){
         if(A[j] > A[i]) break;
     }
     
     swap(A[j],A[i]);
     sort(A.begin()+i+1,A.end());
     return  ;
    }
};